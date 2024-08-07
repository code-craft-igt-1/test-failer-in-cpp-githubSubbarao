cmake_minimum_required(VERSION 3.10)
project(TestFailerInCpp)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FetchContent module
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP true
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Include GoogleTest module
include(GoogleTest)

# Add source files
add_library(tshirts tshirts.cpp)
add_library(misaligned misaligned.cpp)
add_library(weatherreport weatherreport.cpp)

# Add test files
add_executable(test_tshirts test_tshirts.cpp)
add_executable(test_misaligned test_misaligned.cpp)
add_executable(test_weatherreport test_weatherreport.cpp)

# Link Google Test and source files
target_link_libraries(test_tshirts gtest gtest_main tshirts)
target_link_libraries(test_misaligned gtest gtest_main misaligned)
target_link_libraries(test_weatherreport gtest gtest_main weatherreport)

# Discover and register tests
gtest_discover_tests(test_tshirts)
gtest_discover_tests(test_misaligned)
gtest_discover_tests(test_weatherreport)