# Install script for directory: /workspaces/ISO-405/src/usuario

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
=======
    set(CMAKE_INSTALL_CONFIG_NAME "")
>>>>>>> 332eb2e (	modified:   build/CMakeCache.txt)
=======
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
>>>>>>> 3f7bd85 (Update CMake configuration and set Debug build type)
=======
    set(CMAKE_INSTALL_CONFIG_NAME "")
>>>>>>> 06888e9 (Revert "Update CMake configuration and set Debug build type")
=======
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
>>>>>>> 44bfc57 (	new file:   build/.cmake/api/v1/query/client-vscode/query.json)
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

