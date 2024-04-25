#include <stdio.h>

/* count lines in input */
main()
{
    int c, nl, spc, tab;

    nl = 0;
    spc = 0;
    tab = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++spc;
        if (c == '\t')
            ++tab;
    }

    printf("line count -> %d\n", nl);
    printf("space count -> %d\n", spc);
    printf("tab count -> %d\n", tab);
}