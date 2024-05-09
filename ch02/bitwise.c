#include <stdio.h>

#define INITIAL 100

main()
{
    int val1 = INITIAL;
    val1 = val1 & 0177;
    printf("val1 & 0177 -> %d\n", val1);
}