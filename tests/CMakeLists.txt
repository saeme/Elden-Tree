cmake_minimum_required(VERSION 3.16)

project(EventHandlerTests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

# Specify the correct test source file
add_executable(EventHandlerTest test_event_handler.cpp)

target_link_libraries(EventHandlerTest PRIVATE EventHandler GTest::GTest GTest::Main)

add_test(NAME EventHandlerTest COMMAND EventHandlerTest)