#include <iostream>
#include "VirtualMemory.h"
#include "PhysicalMemory.h"

#define NUM_OF_LAYERS 5

struct dfsArg
{
	unsigned long frameMax;
	unsigned long depth;
	unsigned long maxDepth;
	word_t theEmptyTableAddr;
	word_t emptyParentFrameAdr;
	word_t minDistParentFrmaeAdr; //used to pass along
};


///
/// \param n thenumber  to be converted to binary in string format
/// \return above
std::string ll2bs(long long n)
{
	char result[(sizeof(unsigned long) * 8) + 1];
	unsigned index = sizeof(unsigned long) * 8;
	result[index] = '\0';

	do result[--index] = '0' + (n & 1);
	while (n >>= 1);
	std::string ret = std::string(result + index);
	while (ret.length() < OFFSET_WIDTH)
	{
		ret += "0" + ret;
	}
	return std::string(result + index);
}

///
/// \param s the binary string, i.e. "0110100" to be converted to number (long long int)
/// \return
uint64_t bs2ll(const std::string &s)
{
	return std::stoul(s, nullptr, 2);
}

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


int VMread(uint64_t virtualAddress, word_t *value) // write will have the same logic
{
	// for (depth = 0; depth < numOfLayers; ++depth)
	//{
	//	if i see an empty table: dfsSearch for available frame
	//	else
	//	read from physical memory found at leaf that you reached
	//}
	return 1;
}
void getNextFrameAddr(uint64_t va, word_t *nextFrameAddr, int depth)
{
	PMread((*nextFrameAddr) * PAGE_SIZE + entryOfTableInDepthN(va, depth), nextFrameAddr);
}


uint64_t translateAddr(uint64_t va)
{
	word_t nextFrameAddr = 0;
	for (int depth = 0; depth < TABLES_DEPTH; ++depth)
	{
		getNextFrameAddr(va, &nextFrameAddr, depth);
		if (nextFrameAddr == 0)
		{
			//problem
			//DFS
		}
	}
	return nextFrameAddr * PAGE_SIZE + offset(va);
}


dfsArg dfsSearch(dfsArg arg)
{
	if (arg.depth == 0)
	{

	}
	//initialzie arg
	if (arg.depth == arg.maxDepth) //this means we reached the desired depth
	{
		//will this ever occur?
	}

}

int VMwrite(uint64_t virtualAddress, word_t value)
{
	return 1;
}

int main() //TODO remove this function!
{
	std::cout << "Hello, World!" << std::endl;
	unsigned long num = 15;

	std::cout << ll2bs(num) << std::endl;

	long long int i = std::stoll(ll2bs(num), nullptr, 2);
	std::cout << i << std::endl;
	std::cout << "------------------------" << std::endl;
	u_int64_t virtAdd = static_cast<u_int64_t>(bs2ll("00111001110011011010"));
	// 0011 1001 1100 1101 1010

	std::cout << "------------------------" << std::endl;
//	std::cout << "table 0: " << ll2bs(entryOfTableInDepthN(virtAdd, 0)) << std::endl;
//	std::cout << "table 1: " << ll2bs(entryOfTableInDepthN(virtAdd, 1)) << std::endl;
//	std::cout << "table 2: " << ll2bs(entryOfTableInDepthN(virtAdd, 2)) << std::endl;
//	std::cout << "table 3: " << ll2bs(entryOfTableInDepthN(virtAdd, 3)) << std::endl;
//	std::cout << "fucking offset: " << ll2bs(offset(virtAdd)) << std::endl;

//	PMwrite(0+1,1);
//	PMwrite(1*16+6,7);
//	PMwrite(7*16+0,3);
//	PMwrite(3*16+9,4);
//	PMwrite(4*16+5,13); //13 is the value;
//	word_t x;
//	PMread(translateAddr(bs2ll("00010110000010010101")),&x);
//	std::cout<<x<<std::endl;
//	PMwrite(translateAddr(bs2ll("00010110000010010110")),117);
//	PMread(translateAddr(bs2ll("00010110000010010110")),&x);
//	PMread(4*16+6,&x);
//	std::cout<<x<<std::endl;
	return 0;
}