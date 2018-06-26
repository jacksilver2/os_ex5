#include <iostream>
#include "VirtualMemory.h"
#include "PhysicalMemory.h"


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
		ret +="0" + ret;
	}
	return std::string(result + index);
}

///
/// \param s the binary string, i.e. "0110100" to be converted to number (long long int)
/// \return
long long int bs2ll(const std::string &s)
{
	return std::stoll(s, nullptr, 2);
}

uint64_t nLSBbits(uint64_t number, int n)
{
	return number & ((1ULL << n) - 1);
}

uint64_t nthTableVirtAddress(uint64_t virtAddr, int n)
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
	std::cout << "table 0: " << ll2bs(nthTableVirtAddress(virtAdd, 0)) << std::endl;
	std::cout << "table 1: " << ll2bs(nthTableVirtAddress(virtAdd, 1)) << std::endl;
	std::cout << "table 2: " << ll2bs(nthTableVirtAddress(virtAdd, 2)) << std::endl;
	std::cout << "table 3: " << ll2bs(nthTableVirtAddress(virtAdd, 3)) << std::endl;
	std::cout << "fucking offset: " << ll2bs(offset(virtAdd)) << std::endl;

	return 0;
}
