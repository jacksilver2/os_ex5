#include <iostream>

int shmain()
{
	std::cout << "Hello, World!" << std::endl;
	unsigned int num = 15;
	num  >>= 1;
	std::cout<<num<<std::endl;
	return 0;
}