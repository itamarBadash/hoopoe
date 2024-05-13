cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

# Path to the sbus library source code
# Adjust the path as necessary to point to where the PiSBUS library is located relative to this CMakeLists.txt
add_subdirectory(PiSBUS)  # Add this if the PiSBUS library is part of the same project

# Include directory for the sbus library
include_directories(path/to/PiSBUS/src)

add_executable(untitled main.cpp)

# Link the static sbus library to your executable
target_link_libraries(untitled sbus)
