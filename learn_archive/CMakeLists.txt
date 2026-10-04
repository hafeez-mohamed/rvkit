cmake_minimum_required(VERSION 3.25)
project(factorial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.18.0.tar.gz
)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_library(factorial factorial.cpp)
target_include_directories(factorial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(facto main.cpp)
target_link_libraries(facto PRIVATE factorial)

add_executable(factorial_test factorial_test.cpp)
target_link_libraries(factorial_test PRIVATE factorial GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(factorial_test)
