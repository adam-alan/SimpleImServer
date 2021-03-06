# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/loadstar/VsCodeDir/Cpp/SimpleImServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build

# Include any dependencies generated for this target.
include CMakeFiles/SimpleImServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SimpleImServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimpleImServer.dir/flags.make

CMakeFiles/SimpleImServer.dir/main.cpp.o: CMakeFiles/SimpleImServer.dir/flags.make
CMakeFiles/SimpleImServer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimpleImServer.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimpleImServer.dir/main.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/main.cpp

CMakeFiles/SimpleImServer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimpleImServer.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/main.cpp > CMakeFiles/SimpleImServer.dir/main.cpp.i

CMakeFiles/SimpleImServer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimpleImServer.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/main.cpp -o CMakeFiles/SimpleImServer.dir/main.cpp.s

# Object files for target SimpleImServer
SimpleImServer_OBJECTS = \
"CMakeFiles/SimpleImServer.dir/main.cpp.o"

# External object files for target SimpleImServer
SimpleImServer_EXTERNAL_OBJECTS =

SimpleImServer: CMakeFiles/SimpleImServer.dir/main.cpp.o
SimpleImServer: CMakeFiles/SimpleImServer.dir/build.make
SimpleImServer: data_model/libdata_model.so
SimpleImServer: db_module/libdb_module.so
SimpleImServer: socket/libsocket.so
SimpleImServer: CMakeFiles/SimpleImServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimpleImServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleImServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimpleImServer.dir/build: SimpleImServer

.PHONY : CMakeFiles/SimpleImServer.dir/build

CMakeFiles/SimpleImServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimpleImServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimpleImServer.dir/clean

CMakeFiles/SimpleImServer.dir/depend:
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loadstar/VsCodeDir/Cpp/SimpleImServer /home/loadstar/VsCodeDir/Cpp/SimpleImServer /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles/SimpleImServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SimpleImServer.dir/depend

