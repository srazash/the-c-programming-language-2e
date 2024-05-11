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

    printf("%d\n", setbits(x, 7, 3, y));
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    /* assuming x=11110000, p=7, n=3, y=00111100 */
    unsigned mask = ~(~0 << n); /* mask=00000111 */
    mask = mask << (p + 1 - n); /* mask=11100000 */

    x = x & ~mask; /* x=00001000*/

    y = y & ~(~0 << n); /* y=00000100*/
    y = y << (p + 1 - n); /* y=10000000*/

    return x | y; /* x=10010000 */
}