cmake_minimum_required(VERSION 3.10)

project(program-analysis)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/extern/sanitizers-cmake/cmake)
find_package(Sanitizers)

set(CMAKE_CXX_STANDARD 11)

add_library(C C.cc C.h)
add_sanitizers(C)
add_library(D D.cc D.h)
add_sanitizers(D)

add_executable(main main.cc)
add_sanitizers(main)
target_link_libraries(main C D)