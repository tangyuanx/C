#ifndef PLATFORM_CONFIG_H
#define PLATFORM_CONFIG_H

#if defined(CHIP_RISCV)

#define PLATFORM_NAME "RISC-V"
#define PLATFORM_WORD_BITS 64

#elif defined(CHIP_ARM)

#define PLATFORM_NAME "ARM"
#define PLATFORM_WORD_BITS 32

#else

#error "No chip type selected. Please define CHIP_RISCV or CHIP_ARM."

#endif

#endif