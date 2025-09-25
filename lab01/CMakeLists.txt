cmake_minimum_required(VERSION 3.20)
project(Lab01 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    if(CMAKE_CXX_COMPILER_VERSION VERSION_LESS "14.0")
        message(FATAL_ERROR "GCC version must be at least 14.0")
    endif()
endif()

include_directories(include)

add_executable(vowel_counter
    main.cpp
    src/vowel_counter.cpp
)

find_package(GTest REQUIRED)
enable_testing()

add_executable(vowel_counter_tests
    test/tests01.cpp
    src/vowel_counter.cpp
)

target_include_directories(vowel_counter_tests PRIVATE include)

target_link_libraries(vowel_counter_tests 
    GTest::gtest 
    GTest::gtest_main
)

add_test(NAME VowelCounterTests COMMAND vowel_counter_tests)

message(STATUS "Build configuration complete")