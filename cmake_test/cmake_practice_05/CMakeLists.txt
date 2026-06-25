cmake_minimum_required(VERSION 3.16)
project(cmake_practice_05 C)

option(ENABLE_WARNINGS "Enable compiler warnings" ON)
option(ENABLE_WERROR "Treat warnings as errors" OFF)

add_subdirectory(math)

add_executable(cmake_practice_05 app/main.c)

target_link_libraries(cmake_practice_05 PRIVATE math)

if (ENABLE_WARNINGS)
	target_compile_options(cmake_practice_05 PRIVATE
		-Wall
		-Wextra
		-Wpedantic
	)
endif()

if (ENABLE_WERROR)
	target_compile_options(cmake_practice_05 PRIVATE
		-Werror
	)
endif()
