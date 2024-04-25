#include <stdio.h>

/* count character in input; 2nd version */
main()
{
    double nc;

    nc = 0;

    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("count -> %.0f\n", nc);
}