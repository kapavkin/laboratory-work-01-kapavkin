# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build

# Include any dependencies generated for this target.
include number/CMakeFiles/number.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include number/CMakeFiles/number.dir/compiler_depend.make

# Include the progress variables for this target.
include number/CMakeFiles/number.dir/progress.make

# Include the compile flags for this target's objects.
include number/CMakeFiles/number.dir/flags.make

number/CMakeFiles/number.dir/number.cpp.o: number/CMakeFiles/number.dir/flags.make
number/CMakeFiles/number.dir/number.cpp.o: ../number/number.cpp
number/CMakeFiles/number.dir/number.cpp.o: number/CMakeFiles/number.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object number/CMakeFiles/number.dir/number.cpp.o"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT number/CMakeFiles/number.dir/number.cpp.o -MF CMakeFiles/number.dir/number.cpp.o.d -o CMakeFiles/number.dir/number.cpp.o -c /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/number/number.cpp

number/CMakeFiles/number.dir/number.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/number.dir/number.cpp.i"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/number/number.cpp > CMakeFiles/number.dir/number.cpp.i

number/CMakeFiles/number.dir/number.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/number.dir/number.cpp.s"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/number/number.cpp -o CMakeFiles/number.dir/number.cpp.s

# Object files for target number
number_OBJECTS = \
"CMakeFiles/number.dir/number.cpp.o"

# External object files for target number
number_EXTERNAL_OBJECTS =

number/libnumber.a: number/CMakeFiles/number.dir/number.cpp.o
number/libnumber.a: number/CMakeFiles/number.dir/build.make
number/libnumber.a: number/CMakeFiles/number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnumber.a"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && $(CMAKE_COMMAND) -P CMakeFiles/number.dir/cmake_clean_target.cmake
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
number/CMakeFiles/number.dir/build: number/libnumber.a
.PHONY : number/CMakeFiles/number.dir/build

number/CMakeFiles/number.dir/clean:
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number && $(CMAKE_COMMAND) -P CMakeFiles/number.dir/cmake_clean.cmake
.PHONY : number/CMakeFiles/number.dir/clean

number/CMakeFiles/number.dir/depend:
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/number /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/number/CMakeFiles/number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : number/CMakeFiles/number.dir/depend
