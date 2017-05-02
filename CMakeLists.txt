cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#version number
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWorld_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (Utilities)
include_directories(Utilities)
#indicate the entry point for the executable
add_executable (Test Utilities Main.cpp)

# Indicate which libraries to include during the link process.
target_link_libraries (Test Utilities)

install (TARGETS Test DESTINATION bin)
