cmake_minimum_required(VERSION 3.0)

project(date)

set(HEADERS date.h)
set(SOURCES date.cpp)

add_library(date ${HEADERS} ${SOURCES})

target_include_directories(date PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
