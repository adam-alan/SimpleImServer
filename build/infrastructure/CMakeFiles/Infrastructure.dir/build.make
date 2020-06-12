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
include infrastructure/CMakeFiles/Infrastructure.dir/depend.make

# Include the progress variables for this target.
include infrastructure/CMakeFiles/Infrastructure.dir/progress.make

# Include the compile flags for this target's objects.
include infrastructure/CMakeFiles/Infrastructure.dir/flags.make

infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.o: ../infrastructure/model/Group.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/model/Group.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/Group.cc

infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/model/Group.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/Group.cc > CMakeFiles/Infrastructure.dir/model/Group.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/model/Group.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/Group.cc -o CMakeFiles/Infrastructure.dir/model/Group.cc.s

infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.o: ../infrastructure/model/User.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/model/User.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/User.cc

infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/model/User.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/User.cc > CMakeFiles/Infrastructure.dir/model/User.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/model/User.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/User.cc -o CMakeFiles/Infrastructure.dir/model/User.cc.s

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o: ../infrastructure/model/UserMsgContent.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgContent.cc

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgContent.cc > CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgContent.cc -o CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.s

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o: ../infrastructure/model/UserMsgRelation.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgRelation.cc

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgRelation.cc > CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/model/UserMsgRelation.cc -o CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.s

infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o: ../infrastructure/messages/LoginRequest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/LoginRequest.cc

infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/LoginRequest.cc > CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/LoginRequest.cc -o CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.s

infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o: infrastructure/CMakeFiles/Infrastructure.dir/flags.make
infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o: ../infrastructure/messages/loginResponce.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o -c /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/loginResponce.cc

infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.i"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/loginResponce.cc > CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.i

infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.s"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loadstar/VscodeCpp/SimpleImServer/infrastructure/messages/loginResponce.cc -o CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.s

# Object files for target Infrastructure
Infrastructure_OBJECTS = \
"CMakeFiles/Infrastructure.dir/model/Group.cc.o" \
"CMakeFiles/Infrastructure.dir/model/User.cc.o" \
"CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o" \
"CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o" \
"CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o" \
"CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o"

# External object files for target Infrastructure
Infrastructure_EXTERNAL_OBJECTS =

infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/model/Group.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/model/User.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgContent.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/model/UserMsgRelation.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/messages/LoginRequest.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/messages/loginResponce.cc.o
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/build.make
infrastructure/libInfrastructure.so: infrastructure/CMakeFiles/Infrastructure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/loadstar/VscodeCpp/SimpleImServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library libInfrastructure.so"
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Infrastructure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
infrastructure/CMakeFiles/Infrastructure.dir/build: infrastructure/libInfrastructure.so

.PHONY : infrastructure/CMakeFiles/Infrastructure.dir/build

infrastructure/CMakeFiles/Infrastructure.dir/clean:
	cd /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure && $(CMAKE_COMMAND) -P CMakeFiles/Infrastructure.dir/cmake_clean.cmake
.PHONY : infrastructure/CMakeFiles/Infrastructure.dir/clean

infrastructure/CMakeFiles/Infrastructure.dir/depend:
	cd /home/loadstar/VscodeCpp/SimpleImServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loadstar/VscodeCpp/SimpleImServer /home/loadstar/VscodeCpp/SimpleImServer/infrastructure /home/loadstar/VscodeCpp/SimpleImServer/build /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure /home/loadstar/VscodeCpp/SimpleImServer/build/infrastructure/CMakeFiles/Infrastructure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : infrastructure/CMakeFiles/Infrastructure.dir/depend

