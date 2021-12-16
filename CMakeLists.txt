cmake_minimum_required(VERSION 3.13)  # CMake version check
project(app)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++14 standard

include_directories(/)
# Add executable target with source files listed in SOURCE_FILES variable
add_executable(app
main.cpp
AgricultureTools.cpp
Farmer.cpp
Tractor.cpp)
