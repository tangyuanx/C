#include "platform.h"
#include "platform_config.h"

const char *platform_get_name(void)
{
    return PLATFORM_NAME;
}

int platform_get_word_bits(void)
{
    return PLATFORM_WORD_BITS;
}