cmake_minimum_required(VERSION 3.16)
project(EldenTree)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Include directories
include_directories(include)


# Add source files
file(GLOB SOURCES "/src/*.cpp")


# Add the main library or executable
add_library(EventHandler src/EventHandler.cpp)

# Add the tests subdirectory
add_subdirectory(tests)