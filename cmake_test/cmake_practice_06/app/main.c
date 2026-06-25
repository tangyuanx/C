#include <stdio.h>
#include "platform.h"
#include "platform_config.h"

int main(void)
{
    printf("platform name: %s\n", platform_get_name());
    printf("word bits: %d\n", platform_get_word_bits());

#ifdef CHIP_RISCV
    printf("compile macro: CHIP_RISCV\n");
#endif

#ifdef CHIP_ARM
    printf("compile macro: CHIP_ARM\n");
#endif

    printf("config platform name: %s\n", PLATFORM_NAME);

    return 0;
}