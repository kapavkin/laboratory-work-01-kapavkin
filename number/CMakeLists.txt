cmake_minimum_required(VERSION 3.0)

project(number)

set(HEADERS number.h)
set(SOURCES number.cpp)

add_library(number ${HEADERS} ${SOURCES})

target_include_directories(number PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
