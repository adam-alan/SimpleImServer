# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/loadstar/VscodeCpp/SimpleImServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/loadstar/VscodeCpp/SimpleImServer/build

# Include any dependencies generated for this target.
include application/CMakeFiles/Application.dir/depend.make

# Include the progress variables for this target.
include application/CMakeFiles/Application.dir/progress.make

# Include the compile flags for this target's objects.
include application/CMakeFiles/Application.dir/flags.make

application/CMakeFiles/Application.dir/DatabaseService.cc.o: application/CMakeFiles/Application.dir/flags.make
application/CMakeFiles/Application.dir/DatabaseService.cc.o: ../application/DatabaseService.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object application/CMakeFiles/Application.dir/DatabaseService.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/application && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Application.dir/DatabaseService.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/application/DatabaseService.cc

application/CMakeFiles/Application.dir/DatabaseService.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Application.dir/DatabaseService.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/application && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/application/DatabaseService.cc > CMakeFiles/Application.dir/DatabaseService.cc.i

application/CMakeFiles/Application.dir/DatabaseService.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Application.dir/DatabaseService.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/application && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/application/DatabaseService.cc -o CMakeFiles/Application.dir/DatabaseService.cc.s

# Object files for target Application
Application_OBJECTS = \
"CMakeFiles/Application.dir/DatabaseService.cc.o"

# External object files for target Application
Application_EXTERNAL_OBJECTS =

application/libApplication.so: application/CMakeFiles/Application.dir/DatabaseService.cc.o
application/libApplication.so: application/CMakeFiles/Application.dir/build.make
application/libApplication.so: application/CMakeFiles/Application.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libApplication.so"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/application && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Application.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
application/CMakeFiles/Application.dir/build: application/libApplication.so

.PHONY : application/CMakeFiles/Application.dir/build

application/CMakeFiles/Application.dir/clean:
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/application && $(CMAKE_COMMAND) -P CMakeFiles/Application.dir/cmake_clean.cmake
.PHONY : application/CMakeFiles/Application.dir/clean

application/CMakeFiles/Application.dir/depend:
	cd /home/loadstar/VscodeCpp/SimpleImServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loadstar/VscodeCpp/SimpleImServer /home/loadstar/VscodeCpp/SimpleImServer/application /home/loadstar/VscodeCpp/SimpleImServer/build /home/loadstar/VscodeCpp/SimpleImServer/build/application /home/loadstar/VscodeCpp/SimpleImServer/build/application/CMakeFiles/Application.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : application/CMakeFiles/Application.dir/depend

