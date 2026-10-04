
cmake_minimum_required(VERSION 3.25)
project(rvkit LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.18.0.tar.gz
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_subdirectory(tests)

add_executable(bug_heap bug_heap.cpp)
add_executable(facto facto.cpp)
