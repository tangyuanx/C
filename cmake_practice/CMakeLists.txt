cmake_minimum_required(VERSION 4.3)
project(cmake_practice_01 C)

add_subdirectory(math)

add_executable(cmake_practice_01 app/main.c)

target_link_libraries(cmake_practice_01 PRIVATE math_utils)