# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/jacksilver/Software/clion-2018.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jacksilver/Software/clion-2018.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jacksilver/CLionProjects/os_ex5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacksilver/CLionProjects/os_ex5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/os_ex5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/os_ex5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/os_ex5.dir/flags.make

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o: CMakeFiles/os_ex5.dir/flags.make
CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o: ../PhysicalMemory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o -c /home/jacksilver/CLionProjects/os_ex5/PhysicalMemory.cpp

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacksilver/CLionProjects/os_ex5/PhysicalMemory.cpp > CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.i

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacksilver/CLionProjects/os_ex5/PhysicalMemory.cpp -o CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.s

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.requires:

.PHONY : CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.requires

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.provides: CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.requires
	$(MAKE) -f CMakeFiles/os_ex5.dir/build.make CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.provides.build
.PHONY : CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.provides

CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.provides.build: CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o


CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o: CMakeFiles/os_ex5.dir/flags.make
CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o: ../VirtualMemory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o -c /home/jacksilver/CLionProjects/os_ex5/VirtualMemory.cpp

CMakeFiles/os_ex5.dir/VirtualMemory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/os_ex5.dir/VirtualMemory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacksilver/CLionProjects/os_ex5/VirtualMemory.cpp > CMakeFiles/os_ex5.dir/VirtualMemory.cpp.i

CMakeFiles/os_ex5.dir/VirtualMemory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/os_ex5.dir/VirtualMemory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacksilver/CLionProjects/os_ex5/VirtualMemory.cpp -o CMakeFiles/os_ex5.dir/VirtualMemory.cpp.s

CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.requires:

.PHONY : CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.requires

CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.provides: CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.requires
	$(MAKE) -f CMakeFiles/os_ex5.dir/build.make CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.provides.build
.PHONY : CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.provides

CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.provides.build: CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o


CMakeFiles/os_ex5.dir/SimpleTest.cpp.o: CMakeFiles/os_ex5.dir/flags.make
CMakeFiles/os_ex5.dir/SimpleTest.cpp.o: ../SimpleTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/os_ex5.dir/SimpleTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/os_ex5.dir/SimpleTest.cpp.o -c /home/jacksilver/CLionProjects/os_ex5/SimpleTest.cpp

CMakeFiles/os_ex5.dir/SimpleTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/os_ex5.dir/SimpleTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacksilver/CLionProjects/os_ex5/SimpleTest.cpp > CMakeFiles/os_ex5.dir/SimpleTest.cpp.i

CMakeFiles/os_ex5.dir/SimpleTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/os_ex5.dir/SimpleTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacksilver/CLionProjects/os_ex5/SimpleTest.cpp -o CMakeFiles/os_ex5.dir/SimpleTest.cpp.s

CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.requires:

.PHONY : CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.requires

CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.provides: CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/os_ex5.dir/build.make CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.provides.build
.PHONY : CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.provides

CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.provides.build: CMakeFiles/os_ex5.dir/SimpleTest.cpp.o


CMakeFiles/os_ex5.dir/main.cpp.o: CMakeFiles/os_ex5.dir/flags.make
CMakeFiles/os_ex5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/os_ex5.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/os_ex5.dir/main.cpp.o -c /home/jacksilver/CLionProjects/os_ex5/main.cpp

CMakeFiles/os_ex5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/os_ex5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacksilver/CLionProjects/os_ex5/main.cpp > CMakeFiles/os_ex5.dir/main.cpp.i

CMakeFiles/os_ex5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/os_ex5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacksilver/CLionProjects/os_ex5/main.cpp -o CMakeFiles/os_ex5.dir/main.cpp.s

CMakeFiles/os_ex5.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/os_ex5.dir/main.cpp.o.requires

CMakeFiles/os_ex5.dir/main.cpp.o.provides: CMakeFiles/os_ex5.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/os_ex5.dir/build.make CMakeFiles/os_ex5.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/os_ex5.dir/main.cpp.o.provides

CMakeFiles/os_ex5.dir/main.cpp.o.provides.build: CMakeFiles/os_ex5.dir/main.cpp.o


# Object files for target os_ex5
os_ex5_OBJECTS = \
"CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o" \
"CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o" \
"CMakeFiles/os_ex5.dir/SimpleTest.cpp.o" \
"CMakeFiles/os_ex5.dir/main.cpp.o"

# External object files for target os_ex5
os_ex5_EXTERNAL_OBJECTS =

os_ex5: CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o
os_ex5: CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o
os_ex5: CMakeFiles/os_ex5.dir/SimpleTest.cpp.o
os_ex5: CMakeFiles/os_ex5.dir/main.cpp.o
os_ex5: CMakeFiles/os_ex5.dir/build.make
os_ex5: CMakeFiles/os_ex5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable os_ex5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/os_ex5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/os_ex5.dir/build: os_ex5

.PHONY : CMakeFiles/os_ex5.dir/build

CMakeFiles/os_ex5.dir/requires: CMakeFiles/os_ex5.dir/PhysicalMemory.cpp.o.requires
CMakeFiles/os_ex5.dir/requires: CMakeFiles/os_ex5.dir/VirtualMemory.cpp.o.requires
CMakeFiles/os_ex5.dir/requires: CMakeFiles/os_ex5.dir/SimpleTest.cpp.o.requires
CMakeFiles/os_ex5.dir/requires: CMakeFiles/os_ex5.dir/main.cpp.o.requires

.PHONY : CMakeFiles/os_ex5.dir/requires

CMakeFiles/os_ex5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/os_ex5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/os_ex5.dir/clean

CMakeFiles/os_ex5.dir/depend:
	cd /home/jacksilver/CLionProjects/os_ex5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacksilver/CLionProjects/os_ex5 /home/jacksilver/CLionProjects/os_ex5 /home/jacksilver/CLionProjects/os_ex5/cmake-build-debug /home/jacksilver/CLionProjects/os_ex5/cmake-build-debug /home/jacksilver/CLionProjects/os_ex5/cmake-build-debug/CMakeFiles/os_ex5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/os_ex5.dir/depend

