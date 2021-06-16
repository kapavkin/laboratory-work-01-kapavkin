cmake_minimum_required(VERSION 3.0)

project(matrix)

set(HEADERS matrix.h)
set(SOURCES matrix.cpp)

add_library(matrix ${HEADERS} ${SOURCES})

target_include_directories(matrix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
