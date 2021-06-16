cmake_minimum_required(VERSION 3.0)

project(adam)

set(HEADERS adam.h)
set(SOURCES adam.cpp)

add_library(adam ${HEADERS} ${SOURCES})

target_include_directories(adam PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
