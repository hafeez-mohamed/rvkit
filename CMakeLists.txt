
cmake_minimum_required(VERSION 3.25)
project(rvkit LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.18.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)

add_library(rvkit_warnings INTERFACE)
target_compile_options(rvkit_warnings INTERFACE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -Werror)

add_executable(bug_heap bug_heap.cpp)
# target_compile_options(bug_heap PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -Werror)
target_link_libraries(bug_heap PRIVATE rvkit_warnings)
