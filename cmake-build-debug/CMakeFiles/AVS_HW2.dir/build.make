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
CMAKE_SOURCE_DIR = /mnt/d/CLion_Projects/AVS_HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AVS_HW2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AVS_HW2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AVS_HW2.dir/flags.make

CMakeFiles/AVS_HW2.dir/main.cpp.o: CMakeFiles/AVS_HW2.dir/flags.make
CMakeFiles/AVS_HW2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AVS_HW2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AVS_HW2.dir/main.cpp.o -c /mnt/d/CLion_Projects/AVS_HW2/main.cpp

CMakeFiles/AVS_HW2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AVS_HW2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/CLion_Projects/AVS_HW2/main.cpp > CMakeFiles/AVS_HW2.dir/main.cpp.i

CMakeFiles/AVS_HW2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AVS_HW2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/CLion_Projects/AVS_HW2/main.cpp -o CMakeFiles/AVS_HW2.dir/main.cpp.s

# Object files for target AVS_HW2
AVS_HW2_OBJECTS = \
"CMakeFiles/AVS_HW2.dir/main.cpp.o"

# External object files for target AVS_HW2
AVS_HW2_EXTERNAL_OBJECTS =

AVS_HW2: CMakeFiles/AVS_HW2.dir/main.cpp.o
AVS_HW2: CMakeFiles/AVS_HW2.dir/build.make
AVS_HW2: CMakeFiles/AVS_HW2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AVS_HW2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AVS_HW2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AVS_HW2.dir/build: AVS_HW2

.PHONY : CMakeFiles/AVS_HW2.dir/build

CMakeFiles/AVS_HW2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AVS_HW2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AVS_HW2.dir/clean

CMakeFiles/AVS_HW2.dir/depend:
	cd /mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/CLion_Projects/AVS_HW2 /mnt/d/CLion_Projects/AVS_HW2 /mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug /mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug /mnt/d/CLion_Projects/AVS_HW2/cmake-build-debug/CMakeFiles/AVS_HW2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AVS_HW2.dir/depend

