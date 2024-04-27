#include <stdio.h>

#define NEWLINE '\n';

/* print each word from input on it's own line */
main()
{
    int c, prev;

    prev = ' ';

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (c != prev)
                putchar('\n');
        } else {
            putchar(c);
        }
        prev = c;
    }
    printf("\n");
}