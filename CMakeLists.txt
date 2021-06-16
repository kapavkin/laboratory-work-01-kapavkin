cmake_minimum_required(VERSION 3.0)

project(laboratory-work-01-kapavkin)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(MAIN main.cpp)

enable_testing()

add_executable(main ${MAIN})

add_subdirectory(date)
add_subdirectory(number)
add_subdirectory(adam)
add_subdirectory(matrix)

target_link_libraries(main date)
target_link_libraries(main number)
target_link_libraries(main adam)
target_link_libraries(main matrix)
target_link_libraries(main gtest_main)

include(GoogleTest)
gtest_discover_tests(main)
