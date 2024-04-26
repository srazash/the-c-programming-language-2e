#include <stdio.h>

#define SLASH '\\'
#define B 'b'
#define T 't'

/* print input substituting tabs, backspaces and backslashes */
main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar(SLASH);
            putchar(T);
        } else if (c == '\b') {
            putchar(SLASH);
            putchar(B);
        } else if (c == '\\') {
            putchar(SLASH);
            putchar(SLASH);
        } else {
            putchar(c);
        }
    }
}