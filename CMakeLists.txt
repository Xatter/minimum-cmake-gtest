cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 17)

# Grab our dependencies
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.8.0
)

FetchContent_MakeAvailable(googletest)

project(GroqCompiler VERSION 1.0)

add_library(libfoo STATIC foo.cpp foo.h)

enable_testing()
add_executable(unittests test_foo.cpp)
target_link_libraries(unittests gtest_main libfoo)
add_test(NAME unittests
	       COMMAND unittests)