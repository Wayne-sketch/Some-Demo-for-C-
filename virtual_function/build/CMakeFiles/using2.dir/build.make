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
CMAKE_SOURCE_DIR = /home/ctx/dev/virtual_function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctx/dev/virtual_function/build

# Include any dependencies generated for this target.
include CMakeFiles/using2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/using2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/using2.dir/flags.make

CMakeFiles/using2.dir/using2.cpp.o: CMakeFiles/using2.dir/flags.make
CMakeFiles/using2.dir/using2.cpp.o: ../using2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctx/dev/virtual_function/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/using2.dir/using2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/using2.dir/using2.cpp.o -c /home/ctx/dev/virtual_function/using2.cpp

CMakeFiles/using2.dir/using2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/using2.dir/using2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctx/dev/virtual_function/using2.cpp > CMakeFiles/using2.dir/using2.cpp.i

CMakeFiles/using2.dir/using2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/using2.dir/using2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctx/dev/virtual_function/using2.cpp -o CMakeFiles/using2.dir/using2.cpp.s

# Object files for target using2
using2_OBJECTS = \
"CMakeFiles/using2.dir/using2.cpp.o"

# External object files for target using2
using2_EXTERNAL_OBJECTS =

using2: CMakeFiles/using2.dir/using2.cpp.o
using2: CMakeFiles/using2.dir/build.make
using2: CMakeFiles/using2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ctx/dev/virtual_function/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable using2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/using2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/using2.dir/build: using2

.PHONY : CMakeFiles/using2.dir/build

CMakeFiles/using2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/using2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/using2.dir/clean

CMakeFiles/using2.dir/depend:
	cd /home/ctx/dev/virtual_function/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctx/dev/virtual_function /home/ctx/dev/virtual_function /home/ctx/dev/virtual_function/build /home/ctx/dev/virtual_function/build /home/ctx/dev/virtual_function/build/CMakeFiles/using2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/using2.dir/depend

