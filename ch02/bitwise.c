#include <stdio.h>

/*
    &   bitwise AND
    |   bitwise OR
    ^   bitwise XOR
    <<  left shift
    >>  right shift
    ~   one's complement
*/

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
    printf("%d\n", getbits(0b10011101, 4, 2));
    printf("%d\n", getbits(0b10011101, 4, 1));
    printf("%d\n", getbits(0b10011101, 2, 2));
    printf("%d\n", getbits(0b10011101, 4, 3));

    unsigned x = 0b11110000;
    unsigned y = 0b00111100;

    printf("%d\n", setbits(x, 7, 4, y));
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned newx = x >> (p + 1 - n);
    newx = x << (p + 1 - n);
    unsigned newy = ~(~y << n);
    return newx & newy;
}