#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int a = 5;
    int b = 2;

    printf("5 + 2 = %d\n", add(a, b));
    printf("5 - 2 = %d\n", sub(a, b));
    printf("5 * 2 = %d\n", mul(a, b));

    return 0;
}
