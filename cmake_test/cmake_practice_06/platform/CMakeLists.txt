add_library(platform STATIC)

target_sources(platform PRIVATE
    src/platform.c
)

target_include_directories(platform PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(CHIP_TYPE STREQUAL "RISCV")
    target_compile_definitions(platform PUBLIC
        CHIP_RISCV
    )
elseif(CHIP_TYPE STREQUAL "ARM")
    target_compile_definitions(platform PUBLIC
        CHIP_ARM
    )
else()
    message("wrong chip type")
endif()