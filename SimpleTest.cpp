#include "VirtualMemory.h"
#include "PhysicalMemory.h"

#include <cstdio>
#include <cassert>
#include <iostream>
#include <map>

int main(int argc, char **argv) {
	VMinitialize();
	std::map<uint64_t, word_t > bla;
	for (int j = 0; j < (10 * NUM_FRAMES); ++j)
	{
		uint64_t r = rand() % VIRTUAL_MEMORY_SIZE;
		word_t v = rand();
		VMwrite(r, v);
		bla[r]=v;
	}
	for (auto x = bla.begin();  x != bla.end() ; x++)
	{
		word_t y;
		VMread(x->first,&y);
		assert(x->second == y);
		std::cout<<"va: "<< x->first<<", data exp: " << x->second<<", got: "<<y<<std::endl;
	}

//    for (uint64_t i = 0; i < (2 * NUM_FRAMES); ++i) {
//        printf("writing to %llu\n", (long long int) i);
//        VMwrite(5 * i* PAGE_SIZE, i);
//    }
//
//    for (uint64_t i = 0; i < (2 * NUM_FRAMES); ++i) {
//        word_t value;
//        VMread(5 * i * PAGE_SIZE, &value);
//        printf("reading from %llu %d\n", (long long int) i, value);
//        assert(uint64_t(value) == i);
//    }


//	word_t x;
//	VMwrite(13, 3);
//	VMread(13,&x);
////	PMread(9,&x);
//	std::cout<<x<<std::endl;
//	VMwrite(6, 71);
//	VMread(6,&x);
//	std::cout<<x<<std::endl;
//	std::cout<<x<<"donee"<<std::endl;
//	for (int i = 0; i < 16; ++i)
//	{
//		PMread(i,&x);
//		std::cout<<x<<std::endl;
//	}
//	std::cout<<"done!!"<<std::endl;
//	VMwrite(31, 83);
//	VMread(31,&x);
//	std::cout<<x<<" done!!!!!!"<<std::endl;
//	for (int i = 0; i < 16; ++i)
//	{
//		PMread(i,&x);
//		std::cout<<x<<std::endl;
//	}
	return 0;
}