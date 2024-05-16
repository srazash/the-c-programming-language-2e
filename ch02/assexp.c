#include <stdio.h>

int bitcount(unsigned x);
int betterbitcount(unsigned x);

main()
{
    printf("(bitcount) bits in 42,069 -> %d\n", bitcount(42069));
    printf("(betterbitcount) bits in 42,069 -> %d\n", betterbitcount(42069));
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;

    return b;
}

int betterbitcount(unsigned x)
{
    int b = 0;

    while ((x &= (x - 1)) != 0)
        b++;

    if (b > 0)
        return b + 1;
    return b;
}