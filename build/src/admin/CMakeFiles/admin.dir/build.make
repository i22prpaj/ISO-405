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
include src/admin/CMakeFiles/admin.dir/depend.make

# Include the progress variables for this target.
include src/admin/CMakeFiles/admin.dir/progress.make

# Include the compile flags for this target's objects.
include src/admin/CMakeFiles/admin.dir/flags.make

src/admin/CMakeFiles/admin.dir/admin.cc.o: src/admin/CMakeFiles/admin.dir/flags.make
src/admin/CMakeFiles/admin.dir/admin.cc.o: ../src/admin/admin.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/admin/CMakeFiles/admin.dir/admin.cc.o"
	cd /workspaces/ISO-405/build/src/admin && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/admin.dir/admin.cc.o -c /workspaces/ISO-405/src/admin/admin.cc

src/admin/CMakeFiles/admin.dir/admin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/admin.dir/admin.cc.i"
	cd /workspaces/ISO-405/build/src/admin && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ISO-405/src/admin/admin.cc > CMakeFiles/admin.dir/admin.cc.i

src/admin/CMakeFiles/admin.dir/admin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/admin.dir/admin.cc.s"
	cd /workspaces/ISO-405/build/src/admin && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ISO-405/src/admin/admin.cc -o CMakeFiles/admin.dir/admin.cc.s

# Object files for target admin
admin_OBJECTS = \
"CMakeFiles/admin.dir/admin.cc.o"

# External object files for target admin
admin_EXTERNAL_OBJECTS =

src/admin/libadmin.a: src/admin/CMakeFiles/admin.dir/admin.cc.o
src/admin/libadmin.a: src/admin/CMakeFiles/admin.dir/build.make
src/admin/libadmin.a: src/admin/CMakeFiles/admin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/ISO-405/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libadmin.a"
	cd /workspaces/ISO-405/build/src/admin && $(CMAKE_COMMAND) -P CMakeFiles/admin.dir/cmake_clean_target.cmake
	cd /workspaces/ISO-405/build/src/admin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/admin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/admin/CMakeFiles/admin.dir/build: src/admin/libadmin.a

.PHONY : src/admin/CMakeFiles/admin.dir/build

src/admin/CMakeFiles/admin.dir/clean:
	cd /workspaces/ISO-405/build/src/admin && $(CMAKE_COMMAND) -P CMakeFiles/admin.dir/cmake_clean.cmake
.PHONY : src/admin/CMakeFiles/admin.dir/clean

src/admin/CMakeFiles/admin.dir/depend:
	cd /workspaces/ISO-405/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/ISO-405 /workspaces/ISO-405/src/admin /workspaces/ISO-405/build /workspaces/ISO-405/build/src/admin /workspaces/ISO-405/build/src/admin/CMakeFiles/admin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/admin/CMakeFiles/admin.dir/depend

