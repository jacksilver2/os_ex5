cmake_minimum_required(VERSION 3.10)
project(os_ex5)

set(CMAKE_CXX_STANDARD 11)

add_executable(os_ex5 MemoryConstants.h PhysicalMemory.cpp PhysicalMemory.h VirtualMemory.cpp VirtualMemory.h SimpleTest.cpp)