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
include matrix/CMakeFiles/matrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include matrix/CMakeFiles/matrix.dir/compiler_depend.make

# Include the progress variables for this target.
include matrix/CMakeFiles/matrix.dir/progress.make

# Include the compile flags for this target's objects.
include matrix/CMakeFiles/matrix.dir/flags.make

matrix/CMakeFiles/matrix.dir/matrix.cpp.o: matrix/CMakeFiles/matrix.dir/flags.make
matrix/CMakeFiles/matrix.dir/matrix.cpp.o: ../matrix/matrix.cpp
matrix/CMakeFiles/matrix.dir/matrix.cpp.o: matrix/CMakeFiles/matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrix/CMakeFiles/matrix.dir/matrix.cpp.o"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT matrix/CMakeFiles/matrix.dir/matrix.cpp.o -MF CMakeFiles/matrix.dir/matrix.cpp.o.d -o CMakeFiles/matrix.dir/matrix.cpp.o -c /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/matrix/matrix.cpp

matrix/CMakeFiles/matrix.dir/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix.dir/matrix.cpp.i"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/matrix/matrix.cpp > CMakeFiles/matrix.dir/matrix.cpp.i

matrix/CMakeFiles/matrix.dir/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix.dir/matrix.cpp.s"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/matrix/matrix.cpp -o CMakeFiles/matrix.dir/matrix.cpp.s

# Object files for target matrix
matrix_OBJECTS = \
"CMakeFiles/matrix.dir/matrix.cpp.o"

# External object files for target matrix
matrix_EXTERNAL_OBJECTS =

matrix/libmatrix.a: matrix/CMakeFiles/matrix.dir/matrix.cpp.o
matrix/libmatrix.a: matrix/CMakeFiles/matrix.dir/build.make
matrix/libmatrix.a: matrix/CMakeFiles/matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmatrix.a"
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && $(CMAKE_COMMAND) -P CMakeFiles/matrix.dir/cmake_clean_target.cmake
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrix/CMakeFiles/matrix.dir/build: matrix/libmatrix.a
.PHONY : matrix/CMakeFiles/matrix.dir/build

matrix/CMakeFiles/matrix.dir/clean:
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix && $(CMAKE_COMMAND) -P CMakeFiles/matrix.dir/cmake_clean.cmake
.PHONY : matrix/CMakeFiles/matrix.dir/clean

matrix/CMakeFiles/matrix.dir/depend:
	cd /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/matrix /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix /Users/kirillpavkin/Downloads/laboratory-work-01-kapavkin/build/matrix/CMakeFiles/matrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : matrix/CMakeFiles/matrix.dir/depend

