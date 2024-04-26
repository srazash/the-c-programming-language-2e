#include <stdio.h>

#define BLANK ' ' /* blank character */

/* print input removing extra blanks */
main()
{
    int c, prev;

    prev = 'a'; /* initial value */

    while ((c = getchar()) != EOF) {
        if (c == prev && prev == BLANK) {
            ; /* do nothing! */
        } else {
            putchar(c);
        }
        prev = c;
    }
}