#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    printf("`getchar() != EOF` -> %d\n", (getchar() != EOF)); /* verify `getchar() != EOF` is 0 or 1 */
    printf("EOF -> %d\n", c); /* print EOF character */
}