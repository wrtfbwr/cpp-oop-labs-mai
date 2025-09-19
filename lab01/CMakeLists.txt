cmake_minimum_required(VERSION 3.22)
project(vowels_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Подключаем include/
include_directories(include)

# Библиотека с функцией
add_library(vowels src/vowels.cpp)

# Основная программа
add_executable(main main.cpp)
target_link_libraries(main PRIVATE vowels)

# Тесты
include(CTest)
if (BUILD_TESTING)
  include(FetchContent)
  FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  )
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)

  add_executable(tests01 tests/tests01.cpp)
  target_link_libraries(tests01 PRIVATE vowels GTest::gtest_main)
  include(GoogleTest)
  gtest_discover_tests(tests01)
endif()
