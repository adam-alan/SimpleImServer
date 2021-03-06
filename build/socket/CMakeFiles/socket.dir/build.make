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
include socket/CMakeFiles/socket.dir/depend.make

# Include the progress variables for this target.
include socket/CMakeFiles/socket.dir/progress.make

# Include the compile flags for this target's objects.
include socket/CMakeFiles/socket.dir/flags.make

socket/CMakeFiles/socket.dir/ConnManager.cpp.o: socket/CMakeFiles/socket.dir/flags.make
socket/CMakeFiles/socket.dir/ConnManager.cpp.o: ../socket/ConnManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object socket/CMakeFiles/socket.dir/ConnManager.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/socket.dir/ConnManager.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/ConnManager.cpp

socket/CMakeFiles/socket.dir/ConnManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socket.dir/ConnManager.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/ConnManager.cpp > CMakeFiles/socket.dir/ConnManager.cpp.i

socket/CMakeFiles/socket.dir/ConnManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socket.dir/ConnManager.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/ConnManager.cpp -o CMakeFiles/socket.dir/ConnManager.cpp.s

socket/CMakeFiles/socket.dir/Connection.cpp.o: socket/CMakeFiles/socket.dir/flags.make
socket/CMakeFiles/socket.dir/Connection.cpp.o: ../socket/Connection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object socket/CMakeFiles/socket.dir/Connection.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/socket.dir/Connection.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/Connection.cpp

socket/CMakeFiles/socket.dir/Connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socket.dir/Connection.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/Connection.cpp > CMakeFiles/socket.dir/Connection.cpp.i

socket/CMakeFiles/socket.dir/Connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socket.dir/Connection.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/Connection.cpp -o CMakeFiles/socket.dir/Connection.cpp.s

socket/CMakeFiles/socket.dir/TcpServer.cpp.o: socket/CMakeFiles/socket.dir/flags.make
socket/CMakeFiles/socket.dir/TcpServer.cpp.o: ../socket/TcpServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object socket/CMakeFiles/socket.dir/TcpServer.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/socket.dir/TcpServer.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/TcpServer.cpp

socket/CMakeFiles/socket.dir/TcpServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/socket.dir/TcpServer.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/TcpServer.cpp > CMakeFiles/socket.dir/TcpServer.cpp.i

socket/CMakeFiles/socket.dir/TcpServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/socket.dir/TcpServer.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket/TcpServer.cpp -o CMakeFiles/socket.dir/TcpServer.cpp.s

# Object files for target socket
socket_OBJECTS = \
"CMakeFiles/socket.dir/ConnManager.cpp.o" \
"CMakeFiles/socket.dir/Connection.cpp.o" \
"CMakeFiles/socket.dir/TcpServer.cpp.o"

# External object files for target socket
socket_EXTERNAL_OBJECTS =

socket/libsocket.so: socket/CMakeFiles/socket.dir/ConnManager.cpp.o
socket/libsocket.so: socket/CMakeFiles/socket.dir/Connection.cpp.o
socket/libsocket.so: socket/CMakeFiles/socket.dir/TcpServer.cpp.o
socket/libsocket.so: socket/CMakeFiles/socket.dir/build.make
socket/libsocket.so: socket/CMakeFiles/socket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libsocket.so"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/socket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
socket/CMakeFiles/socket.dir/build: socket/libsocket.so

.PHONY : socket/CMakeFiles/socket.dir/build

socket/CMakeFiles/socket.dir/clean:
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket && $(CMAKE_COMMAND) -P CMakeFiles/socket.dir/cmake_clean.cmake
.PHONY : socket/CMakeFiles/socket.dir/clean

socket/CMakeFiles/socket.dir/depend:
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loadstar/VsCodeDir/Cpp/SimpleImServer /home/loadstar/VsCodeDir/Cpp/SimpleImServer/socket /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/socket/CMakeFiles/socket.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : socket/CMakeFiles/socket.dir/depend

