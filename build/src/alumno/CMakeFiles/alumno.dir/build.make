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
CMAKE_SOURCE_DIR = /workspaces/ISO-405

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/ISO-405/build

# Include any dependencies generated for this target.
include src/alumno/CMakeFiles/alumno.dir/depend.make

# Include the progress variables for this target.
include src/alumno/CMakeFiles/alumno.dir/progress.make

# Include the compile flags for this target's objects.
include src/alumno/CMakeFiles/alumno.dir/flags.make

src/alumno/CMakeFiles/alumno.dir/alumno.cc.o: src/alumno/CMakeFiles/alumno.dir/flags.make
src/alumno/CMakeFiles/alumno.dir/alumno.cc.o: ../src/alumno/alumno.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/alumno/CMakeFiles/alumno.dir/alumno.cc.o"
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alumno.dir/alumno.cc.o -c /workspaces/ISO-405/src/alumno/alumno.cc
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alumno.dir/alumno.cc.o -c /workspaces/ISO-405/src/alumno/alumno.cc
>>>>>>> 06888e9 (Revert "Update CMake configuration and set Debug build type")
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alumno.dir/alumno.cc.o -c /workspaces/ISO-405/src/alumno/alumno.cc
>>>>>>> 44bfc57 (	new file:   build/.cmake/api/v1/query/client-vscode/query.json)

src/alumno/CMakeFiles/alumno.dir/alumno.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alumno.dir/alumno.cc.i"
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/alumno/alumno.cc > CMakeFiles/alumno.dir/alumno.cc.i

src/alumno/CMakeFiles/alumno.dir/alumno.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alumno.dir/alumno.cc.s"
<<<<<<< HEAD
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/alumno/alumno.cc -o CMakeFiles/alumno.dir/alumno.cc.s
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alumno.dir/alumno.cc.o -c /workspaces/ISO-405/src/alumno/alumno.cc
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alumno.dir/alumno.cc.o -c /workspaces/ISO-405/src/alumno/alumno.cc
>>>>>>> 3f7bd85 (Update CMake configuration and set Debug build type)

src/alumno/CMakeFiles/alumno.dir/alumno.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alumno.dir/alumno.cc.i"
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/alumno/alumno.cc > CMakeFiles/alumno.dir/alumno.cc.i

src/alumno/CMakeFiles/alumno.dir/alumno.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alumno.dir/alumno.cc.s"
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/alumno/alumno.cc -o CMakeFiles/alumno.dir/alumno.cc.s
>>>>>>> 332eb2e (	modified:   build/CMakeCache.txt)
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/alumno/alumno.cc -o CMakeFiles/alumno.dir/alumno.cc.s
>>>>>>> 3f7bd85 (Update CMake configuration and set Debug build type)
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/alumno/alumno.cc -o CMakeFiles/alumno.dir/alumno.cc.s
>>>>>>> 06888e9 (Revert "Update CMake configuration and set Debug build type")
=======
	cd /workspaces/ISO-405/build/src/alumno && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/alumno/alumno.cc -o CMakeFiles/alumno.dir/alumno.cc.s
>>>>>>> 44bfc57 (	new file:   build/.cmake/api/v1/query/client-vscode/query.json)

# Object files for target alumno
alumno_OBJECTS = \
"CMakeFiles/alumno.dir/alumno.cc.o"

# External object files for target alumno
alumno_EXTERNAL_OBJECTS =

src/alumno/libalumno.a: src/alumno/CMakeFiles/alumno.dir/alumno.cc.o
src/alumno/libalumno.a: src/alumno/CMakeFiles/alumno.dir/build.make
src/alumno/libalumno.a: src/alumno/CMakeFiles/alumno.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libalumno.a"
	cd /workspaces/ISO-405/build/src/alumno && $(CMAKE_COMMAND) -P CMakeFiles/alumno.dir/cmake_clean_target.cmake
	cd /workspaces/ISO-405/build/src/alumno && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alumno.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/alumno/CMakeFiles/alumno.dir/build: src/alumno/libalumno.a

.PHONY : src/alumno/CMakeFiles/alumno.dir/build

src/alumno/CMakeFiles/alumno.dir/clean:
	cd /workspaces/ISO-405/build/src/alumno && $(CMAKE_COMMAND) -P CMakeFiles/alumno.dir/cmake_clean.cmake
.PHONY : src/alumno/CMakeFiles/alumno.dir/clean

src/alumno/CMakeFiles/alumno.dir/depend:
	cd /workspaces/ISO-405/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/ISO-405 /workspaces/ISO-405/src/alumno /workspaces/ISO-405/build /workspaces/ISO-405/build/src/alumno /workspaces/ISO-405/build/src/alumno/CMakeFiles/alumno.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/alumno/CMakeFiles/alumno.dir/depend

