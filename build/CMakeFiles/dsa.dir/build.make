# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lilwizzz/Devops/DSA-Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lilwizzz/Devops/DSA-Practice/build

# Include any dependencies generated for this target.
include CMakeFiles/dsa.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/dsa.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dsa.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dsa.dir/flags.make

CMakeFiles/dsa.dir/main.cpp.o: CMakeFiles/dsa.dir/flags.make
CMakeFiles/dsa.dir/main.cpp.o: /home/lilwizzz/Devops/DSA-Practice/main.cpp
CMakeFiles/dsa.dir/main.cpp.o: CMakeFiles/dsa.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lilwizzz/Devops/DSA-Practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dsa.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dsa.dir/main.cpp.o -MF CMakeFiles/dsa.dir/main.cpp.o.d -o CMakeFiles/dsa.dir/main.cpp.o -c /home/lilwizzz/Devops/DSA-Practice/main.cpp

CMakeFiles/dsa.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dsa.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lilwizzz/Devops/DSA-Practice/main.cpp > CMakeFiles/dsa.dir/main.cpp.i

CMakeFiles/dsa.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dsa.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lilwizzz/Devops/DSA-Practice/main.cpp -o CMakeFiles/dsa.dir/main.cpp.s

# Object files for target dsa
dsa_OBJECTS = \
"CMakeFiles/dsa.dir/main.cpp.o"

# External object files for target dsa
dsa_EXTERNAL_OBJECTS =

dsa: CMakeFiles/dsa.dir/main.cpp.o
dsa: CMakeFiles/dsa.dir/build.make
dsa: CMakeFiles/dsa.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lilwizzz/Devops/DSA-Practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dsa"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dsa.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dsa.dir/build: dsa
.PHONY : CMakeFiles/dsa.dir/build

CMakeFiles/dsa.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dsa.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dsa.dir/clean

CMakeFiles/dsa.dir/depend:
	cd /home/lilwizzz/Devops/DSA-Practice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilwizzz/Devops/DSA-Practice /home/lilwizzz/Devops/DSA-Practice /home/lilwizzz/Devops/DSA-Practice/build /home/lilwizzz/Devops/DSA-Practice/build /home/lilwizzz/Devops/DSA-Practice/build/CMakeFiles/dsa.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dsa.dir/depend

