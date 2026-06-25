add_library(math STATIC)

target_sources(math PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src/add.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/sub.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/mul.c
)
target_include_directories(math PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

if (ENABLE_WARNINGS)
	target_compile_options(math PRIVATE
		-Wall
		-Wextra
		-Wpedantic
	)
endif()

if (ENABLE_WERROR)
	target_compile_options(math PRIVATE
		-Werror
	)
endif()
