cmake_minimum_required(VERSION 3.0.0)
project(AdventOfCode VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(AdventOfCode main.cpp
star1/star1.h star1/star1.cpp
star2/star2.h star2/star2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
