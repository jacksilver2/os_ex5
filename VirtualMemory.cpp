//#include <iostream>
#include "VirtualMemory.h"
#include "PhysicalMemory.h"

uint64_t nLSBbits(uint64_t number, int n)
{
	return number & ((1UL << n) - 1);
}

uint64_t entryOfTableInDepthN(uint64_t virtAddr, int n)
{
	virtAddr >>= VIRTUAL_ADDRESS_WIDTH - OFFSET_WIDTH * (n + 1);
	return nLSBbits(virtAddr, OFFSET_WIDTH);
}

uint64_t offset(uint64_t virtualAddress)
{
	return nLSBbits(virtualAddress, OFFSET_WIDTH);
}

void clearTable(uint64_t frameIndex)
{
	for (uint64_t i = 0; i < PAGE_SIZE; ++i)
	{
		PMwrite(frameIndex * PAGE_SIZE + i, 0);
	}
}

void VMinitialize()
{
	clearTable(0);
}

uint64_t dist(uint64_t a, uint64_t b)
{
	if (a > b)
	{
		return a - b;
	}
	return b - a;
}

uint64_t cyclicDist(uint64_t va1, uint64_t va2)
{
	uint64_t value1 = dist(va1, va2);
	uint64_t value2 = NUM_PAGES - value1;
	if (value1 < value2)
	{
		return value1;
	}
	return value2;
}

uint64_t calcMyVirtAddr(uint64_t last, int entry)
{
	last <<= OFFSET_WIDTH;
	return last + entry;
}

int dfsFrame(int depth, uint64_t virtAddr, uint64_t curVa, word_t originalTable,
			 word_t frameNum, word_t parentFrameNum, int entryIndexInParent,
			 word_t *resultFrameNum, word_t *resultParentFrameNum, int *resultEntryIndexInParent, uint64_t *resultVa,
			 word_t *maxFrameNum, uint64_t *maxCyclicPageDist)
{
	// update max frame:
	if (*maxFrameNum < frameNum)
	{
		*maxFrameNum = frameNum;
	}
	if (depth == TABLES_DEPTH)
	{
		uint64_t curCyclicDist = cyclicDist(virtAddr >> OFFSET_WIDTH, curVa);
		if (*maxCyclicPageDist < curCyclicDist)
		{
			*maxCyclicPageDist = curCyclicDist;
			*resultFrameNum = frameNum;
			*resultParentFrameNum = parentFrameNum;
			*resultEntryIndexInParent = entryIndexInParent;
			*resultVa = curVa;
		}
		return 3;
	}
	bool isLeaf = true;

	for (int i = 0; i < PAGE_SIZE; ++i)
	{
		word_t x;
		PMread(static_cast<uint64_t>(frameNum * PAGE_SIZE + i), &x);
		if (x != 0)
		{
			isLeaf = false;
			int y = dfsFrame(depth + 1, virtAddr, calcMyVirtAddr(curVa, i), originalTable,
							 x, frameNum, i,
							 resultFrameNum, resultParentFrameNum, resultEntryIndexInParent, resultVa,
							 maxFrameNum, maxCyclicPageDist);
			if (y == 1)
			{
				PMwrite(static_cast<uint64_t>(frameNum * PAGE_SIZE + i),
						0); //erased leaf son from self
				return 2;
			}
			if (y == 2)
			{
				return 2;
			}
		}
	}
	if (isLeaf && frameNum != originalTable && depth != 0)
	{
		*resultFrameNum = frameNum;
		return 1;
	}
	return 3;
}

word_t provideFrame(uint64_t virtAddr, word_t frameNum)
{
	word_t resultFrameNum = 0;
	word_t resultParentFrameNum = 0;
	int resultEntryIndexInParent = 0;
	uint64_t resultVa = 0;
	word_t maxFrameNum = 0;
	uint64_t maxCyclicPageDist = 0;
	int dfsRetVal = dfsFrame(0, virtAddr, 0, frameNum, 0, 0, 0,
							 &resultFrameNum, &resultParentFrameNum, &resultEntryIndexInParent, &resultVa, &maxFrameNum,
							 &maxCyclicPageDist);
	if (dfsRetVal == 1)
	{
#ifdef DEBUG
		std::cerr << "FOO RETURNED 1 on outer call" << std::endl;
#endif
	}
	if (dfsRetVal == 2)
	{
#ifdef DEBUG
		std::cout<<"case1"<<std::endl;
#endif
		return resultFrameNum;
	}
	if (dfsRetVal == 3)
	{
		// found empty frame
		if (maxFrameNum < (NUM_FRAMES - 1))
		{
			resultFrameNum = maxFrameNum + 1;
#ifdef DEBUG
			std::cout << "case2" << std::endl;
#endif
		} else // evicting existing frame
		{
			PMevict(static_cast<uint64_t >(resultFrameNum), resultVa);
			PMwrite(static_cast<uint64_t >(resultParentFrameNum) * PAGE_SIZE + resultEntryIndexInParent, 0);
#ifdef DEBUG
			std::cout << "case3" << std::endl;
#endif
		}
#ifdef DEBUG
		std::cerr << "FOO RETURNED else on outer call" << std::endl;
#endif
		return resultFrameNum;
	}
	return resultFrameNum;
}


uint64_t translateAddr(uint64_t va)
{
	word_t nextFrameAddr = 0;
	word_t frameAddr = 0;
	uint64_t entry = 0;
	for (int depth = 0; depth < TABLES_DEPTH; ++depth)
	{
		entry = entryOfTableInDepthN(va, depth);
		PMread(static_cast<uint64_t >(frameAddr) * PAGE_SIZE + entry, &nextFrameAddr);
		if (nextFrameAddr == 0)
		{
			//DFS
			nextFrameAddr = provideFrame(va, frameAddr);
			PMwrite(static_cast<uint64_t >(frameAddr) * PAGE_SIZE + entry, nextFrameAddr);
			if (depth == (TABLES_DEPTH - 1))
			{
				PMrestore(nextFrameAddr, va >> OFFSET_WIDTH);
			} else
			{
				clearTable(nextFrameAddr);
			}
		}
		frameAddr = nextFrameAddr;
	}
	return frameAddr * PAGE_SIZE + offset(va);
}

int VMread(uint64_t virtualAddress, word_t *value)
{
	uint64_t physicalAddress = translateAddr(virtualAddress);
	PMread(physicalAddress, value);
	return 0;
}

int VMwrite(uint64_t virtualAddress, word_t value)
{
	uint64_t physicalAddress = translateAddr(virtualAddress);
	PMwrite(physicalAddress, value);
	return 0;
}
