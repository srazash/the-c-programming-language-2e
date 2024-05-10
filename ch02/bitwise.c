#include <stdio.h>

/*
    &   bitwise AND
    |   bitwise OR
    ^   bitwise XOR
    <<  left shift
    >>  right shift
    ~   one's complement
*/

setbits(int x, int p, int n, int y);

main()
{
    int n = 9; /* 00001001 */
    printf("%d\n", n);
    n = n & 0017;

 
 
    printf("%d\n", n);
}

setbits(int x, int p, int n, int y)
{
    return x;
}