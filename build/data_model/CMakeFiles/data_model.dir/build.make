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
include data_model/CMakeFiles/data_model.dir/depend.make

# Include the progress variables for this target.
include data_model/CMakeFiles/data_model.dir/progress.make

# Include the compile flags for this target's objects.
include data_model/CMakeFiles/data_model.dir/flags.make

data_model/CMakeFiles/data_model.dir/model/User.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/model/User.cpp.o: ../data_model/model/User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object data_model/CMakeFiles/data_model.dir/model/User.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/model/User.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/User.cpp

data_model/CMakeFiles/data_model.dir/model/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/model/User.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/User.cpp > CMakeFiles/data_model.dir/model/User.cpp.i

data_model/CMakeFiles/data_model.dir/model/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/model/User.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/User.cpp -o CMakeFiles/data_model.dir/model/User.cpp.s

data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o: ../data_model/model/UserMsgContent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgContent.cpp

data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/model/UserMsgContent.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgContent.cpp > CMakeFiles/data_model.dir/model/UserMsgContent.cpp.i

data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/model/UserMsgContent.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgContent.cpp -o CMakeFiles/data_model.dir/model/UserMsgContent.cpp.s

data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o: ../data_model/model/UserMsgIndex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgIndex.cpp

data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgIndex.cpp > CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.i

data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserMsgIndex.cpp -o CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.s

data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.o: ../data_model/model/UserRelation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/model/UserRelation.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserRelation.cpp

data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/model/UserRelation.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserRelation.cpp > CMakeFiles/data_model.dir/model/UserRelation.cpp.i

data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/model/UserRelation.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/model/UserRelation.cpp -o CMakeFiles/data_model.dir/model/UserRelation.cpp.s

data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o: ../data_model/messages/AddFriendRequest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendRequest.cpp

data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendRequest.cpp > CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.i

data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendRequest.cpp -o CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.s

data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o: ../data_model/messages/AddFriendResponce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendResponce.cpp

data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendResponce.cpp > CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.i

data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/AddFriendResponce.cpp -o CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.s

data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o: ../data_model/messages/LoginRequest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginRequest.cpp

data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/LoginRequest.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginRequest.cpp > CMakeFiles/data_model.dir/messages/LoginRequest.cpp.i

data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/LoginRequest.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginRequest.cpp -o CMakeFiles/data_model.dir/messages/LoginRequest.cpp.s

data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o: ../data_model/messages/LoginResponce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginResponce.cpp

data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/LoginResponce.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginResponce.cpp > CMakeFiles/data_model.dir/messages/LoginResponce.cpp.i

data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/LoginResponce.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/LoginResponce.cpp -o CMakeFiles/data_model.dir/messages/LoginResponce.cpp.s

data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o: ../data_model/messages/UserMsgRequest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgRequest.cpp

data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgRequest.cpp > CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.i

data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgRequest.cpp -o CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.s

data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o: data_model/CMakeFiles/data_model.dir/flags.make
data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o: ../data_model/messages/UserMsgResponce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o -c /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgResponce.cpp

data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.i"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgResponce.cpp > CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.i

data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.s"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model/messages/UserMsgResponce.cpp -o CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.s

# Object files for target data_model
data_model_OBJECTS = \
"CMakeFiles/data_model.dir/model/User.cpp.o" \
"CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o" \
"CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o" \
"CMakeFiles/data_model.dir/model/UserRelation.cpp.o" \
"CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o" \
"CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o" \
"CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o" \
"CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o" \
"CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o" \
"CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o"

# External object files for target data_model
data_model_EXTERNAL_OBJECTS =

data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/model/User.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/model/UserMsgContent.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/model/UserMsgIndex.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/model/UserRelation.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/AddFriendRequest.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/AddFriendResponce.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/LoginRequest.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/LoginResponce.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/UserMsgRequest.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/messages/UserMsgResponce.cpp.o
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/build.make
data_model/libdata_model.so: data_model/CMakeFiles/data_model.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared library libdata_model.so"
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/data_model.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
data_model/CMakeFiles/data_model.dir/build: data_model/libdata_model.so

.PHONY : data_model/CMakeFiles/data_model.dir/build

data_model/CMakeFiles/data_model.dir/clean:
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model && $(CMAKE_COMMAND) -P CMakeFiles/data_model.dir/cmake_clean.cmake
.PHONY : data_model/CMakeFiles/data_model.dir/clean

data_model/CMakeFiles/data_model.dir/depend:
	cd /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loadstar/VsCodeDir/Cpp/SimpleImServer /home/loadstar/VsCodeDir/Cpp/SimpleImServer/data_model /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model /home/loadstar/VsCodeDir/Cpp/SimpleImServer/build/data_model/CMakeFiles/data_model.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : data_model/CMakeFiles/data_model.dir/depend

