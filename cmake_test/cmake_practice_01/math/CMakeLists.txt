add_library(math_utils STATIC)

target_include_directories(math_utils PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_sources(math_utils PRIVATE
    src/math_utils.c
)