cmake_minimum_required(VERSION 3.16)
project(cmake_practice_06 C)

set(CHIP_TYPE "RISCV" CACHE STRING "Chip type: RISCV or ARM")

add_subdirectory(platform)

add_executable(cmake_practice_06 app/main.c)

target_link_libraries(cmake_practice_06 PRIVATE
    platform
)