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
include src/usuario/CMakeFiles/usuario.dir/depend.make

# Include the progress variables for this target.
include src/usuario/CMakeFiles/usuario.dir/progress.make

# Include the compile flags for this target's objects.
include src/usuario/CMakeFiles/usuario.dir/flags.make

src/usuario/CMakeFiles/usuario.dir/usuario.cc.o: src/usuario/CMakeFiles/usuario.dir/flags.make
src/usuario/CMakeFiles/usuario.dir/usuario.cc.o: ../src/usuario/usuario.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/usuario/CMakeFiles/usuario.dir/usuario.cc.o"
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usuario.dir/usuario.cc.o -c /workspaces/ISO-405/src/usuario/usuario.cc
=======
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usuario.dir/usuario.cc.o -c /workspaces/ISO-405/src/usuario/usuario.cc
>>>>>>> 06888e9 (Revert "Update CMake configuration and set Debug build type")

src/usuario/CMakeFiles/usuario.dir/usuario.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usuario.dir/usuario.cc.i"
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/usuario/usuario.cc > CMakeFiles/usuario.dir/usuario.cc.i

src/usuario/CMakeFiles/usuario.dir/usuario.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usuario.dir/usuario.cc.s"
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/usuario/usuario.cc -o CMakeFiles/usuario.dir/usuario.cc.s
=======
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usuario.dir/usuario.cc.o -c /workspaces/ISO-405/src/usuario/usuario.cc
=======
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usuario.dir/usuario.cc.o -c /workspaces/ISO-405/src/usuario/usuario.cc
>>>>>>> 3f7bd85 (Update CMake configuration and set Debug build type)

src/usuario/CMakeFiles/usuario.dir/usuario.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usuario.dir/usuario.cc.i"
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/usuario/usuario.cc > CMakeFiles/usuario.dir/usuario.cc.i

src/usuario/CMakeFiles/usuario.dir/usuario.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usuario.dir/usuario.cc.s"
<<<<<<< HEAD
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/usuario/usuario.cc -o CMakeFiles/usuario.dir/usuario.cc.s
>>>>>>> 332eb2e (	modified:   build/CMakeCache.txt)
=======
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/usuario/usuario.cc -o CMakeFiles/usuario.dir/usuario.cc.s
>>>>>>> 3f7bd85 (Update CMake configuration and set Debug build type)
=======
	cd /workspaces/ISO-405/build/src/usuario && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/usuario/usuario.cc -o CMakeFiles/usuario.dir/usuario.cc.s
>>>>>>> 06888e9 (Revert "Update CMake configuration and set Debug build type")

# Object files for target usuario
usuario_OBJECTS = \
"CMakeFiles/usuario.dir/usuario.cc.o"

# External object files for target usuario
usuario_EXTERNAL_OBJECTS =

src/usuario/libusuario.a: src/usuario/CMakeFiles/usuario.dir/usuario.cc.o
src/usuario/libusuario.a: src/usuario/CMakeFiles/usuario.dir/build.make
src/usuario/libusuario.a: src/usuario/CMakeFiles/usuario.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libusuario.a"
	cd /workspaces/ISO-405/build/src/usuario && $(CMAKE_COMMAND) -P CMakeFiles/usuario.dir/cmake_clean_target.cmake
	cd /workspaces/ISO-405/build/src/usuario && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usuario.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/usuario/CMakeFiles/usuario.dir/build: src/usuario/libusuario.a

.PHONY : src/usuario/CMakeFiles/usuario.dir/build

src/usuario/CMakeFiles/usuario.dir/clean:
	cd /workspaces/ISO-405/build/src/usuario && $(CMAKE_COMMAND) -P CMakeFiles/usuario.dir/cmake_clean.cmake
.PHONY : src/usuario/CMakeFiles/usuario.dir/clean

src/usuario/CMakeFiles/usuario.dir/depend:
	cd /workspaces/ISO-405/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/ISO-405 /workspaces/ISO-405/src/usuario /workspaces/ISO-405/build /workspaces/ISO-405/build/src/usuario /workspaces/ISO-405/build/src/usuario/CMakeFiles/usuario.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/usuario/CMakeFiles/usuario.dir/depend

