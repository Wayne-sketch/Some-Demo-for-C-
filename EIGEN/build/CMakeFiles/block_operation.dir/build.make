# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ctx/dev/EIGEN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctx/dev/EIGEN/build

# Include any dependencies generated for this target.
include CMakeFiles/block_operation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/block_operation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/block_operation.dir/flags.make

CMakeFiles/block_operation.dir/block_operation.cpp.o: CMakeFiles/block_operation.dir/flags.make
CMakeFiles/block_operation.dir/block_operation.cpp.o: ../block_operation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctx/dev/EIGEN/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/block_operation.dir/block_operation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/block_operation.dir/block_operation.cpp.o -c /home/ctx/dev/EIGEN/block_operation.cpp

CMakeFiles/block_operation.dir/block_operation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/block_operation.dir/block_operation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctx/dev/EIGEN/block_operation.cpp > CMakeFiles/block_operation.dir/block_operation.cpp.i

CMakeFiles/block_operation.dir/block_operation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/block_operation.dir/block_operation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctx/dev/EIGEN/block_operation.cpp -o CMakeFiles/block_operation.dir/block_operation.cpp.s

# Object files for target block_operation
block_operation_OBJECTS = \
"CMakeFiles/block_operation.dir/block_operation.cpp.o"

# External object files for target block_operation
block_operation_EXTERNAL_OBJECTS =

block_operation: CMakeFiles/block_operation.dir/block_operation.cpp.o
block_operation: CMakeFiles/block_operation.dir/build.make
block_operation: CMakeFiles/block_operation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ctx/dev/EIGEN/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable block_operation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/block_operation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/block_operation.dir/build: block_operation

.PHONY : CMakeFiles/block_operation.dir/build

CMakeFiles/block_operation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/block_operation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/block_operation.dir/clean

CMakeFiles/block_operation.dir/depend:
	cd /home/ctx/dev/EIGEN/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctx/dev/EIGEN /home/ctx/dev/EIGEN /home/ctx/dev/EIGEN/build /home/ctx/dev/EIGEN/build /home/ctx/dev/EIGEN/build/CMakeFiles/block_operation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/block_operation.dir/depend
