#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words and characters in input */
main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nw = nc = 0;
    nl = 1; /* input is already on the first line! */
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines -> %d\n", nl);
    printf("words -> %d\n", nw);
    printf("chars -> %d\n", nc);
}