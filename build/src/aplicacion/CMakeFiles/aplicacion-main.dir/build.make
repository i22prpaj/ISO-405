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
include src/aplicacion/CMakeFiles/aplicacion-main.dir/depend.make

# Include the progress variables for this target.
include src/aplicacion/CMakeFiles/aplicacion-main.dir/progress.make

# Include the compile flags for this target's objects.
include src/aplicacion/CMakeFiles/aplicacion-main.dir/flags.make

src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o: src/aplicacion/CMakeFiles/aplicacion-main.dir/flags.make
src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o: ../src/aplicacion/aplicacion-main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o"
	cd /workspaces/ISO-405/build/src/aplicacion && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o -c /workspaces/ISO-405/src/aplicacion/aplicacion-main.cc

src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.i"
	cd /workspaces/ISO-405/build/src/aplicacion && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/aplicacion/aplicacion-main.cc > CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.i

src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.s"
	cd /workspaces/ISO-405/build/src/aplicacion && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/aplicacion/aplicacion-main.cc -o CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.s

# Object files for target aplicacion-main
aplicacion__main_OBJECTS = \
"CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o"

# External object files for target aplicacion-main
aplicacion__main_EXTERNAL_OBJECTS =

src/aplicacion/aplicacion-main: src/aplicacion/CMakeFiles/aplicacion-main.dir/aplicacion-main.cc.o
src/aplicacion/aplicacion-main: src/aplicacion/CMakeFiles/aplicacion-main.dir/build.make
src/aplicacion/aplicacion-main: src/aplicacion/libaplicacion.a
src/aplicacion/aplicacion-main: src/alumno/libalumno.a
src/aplicacion/aplicacion-main: src/profesor/libprofesor.a
src/aplicacion/aplicacion-main: src/admin/libadmin.a
src/aplicacion/aplicacion-main: src/usuario/libusuario.a
src/aplicacion/aplicacion-main: src/aplicacion/CMakeFiles/aplicacion-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aplicacion-main"
	cd /workspaces/ISO-405/build/src/aplicacion && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aplicacion-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/aplicacion/CMakeFiles/aplicacion-main.dir/build: src/aplicacion/aplicacion-main

.PHONY : src/aplicacion/CMakeFiles/aplicacion-main.dir/build

src/aplicacion/CMakeFiles/aplicacion-main.dir/clean:
	cd /workspaces/ISO-405/build/src/aplicacion && $(CMAKE_COMMAND) -P CMakeFiles/aplicacion-main.dir/cmake_clean.cmake
.PHONY : src/aplicacion/CMakeFiles/aplicacion-main.dir/clean

src/aplicacion/CMakeFiles/aplicacion-main.dir/depend:
	cd /workspaces/ISO-405/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/ISO-405 /workspaces/ISO-405/src/aplicacion /workspaces/ISO-405/build /workspaces/ISO-405/build/src/aplicacion /workspaces/ISO-405/build/src/aplicacion/CMakeFiles/aplicacion-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/aplicacion/CMakeFiles/aplicacion-main.dir/depend

