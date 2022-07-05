cmake_minimum_required(VERSION 3.14)
project(LeetCodeTask)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(solution STATIC Solution.cpp)

add_executable(
    first_test
    tests/first_test.cpp
)

target_link_libraries(
    first_test
    gtest_main
    solution
)

include(GoogleTest)
gtest_discover_tests(first_test)
