#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

/* asciitofloat: convert string s to double */
double asciitofloat(char s[])
{
    double val, power;
    int i, j, e, sign, esign;

    for (i = 0; isspace(s[i]); i++) /* skip whitespace */
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-')
        i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    if (s[i] == 'e' && s[i+1] == '+' || s[i] == 'e' && s[i+1] == '-') {
        i++;
        esign = (s[i] == '-') ? -1 : 1;
        i++;

        for (e = 0; isdigit(s[i]); i++)
            e = 10 * e + (s[i] - '0');
        
        if (esign == 1) {
            for (j = 0; j < e; j++)
                val *= 10;
        } else {
            for (j = 0; j < e; j++)
                val /= 10;
        }

        return (sign * val / power);
    }

    return sign * val / power;
}

int getln(char s[], int lim)
{
    if (s[0] == '\n')
        return -1;

    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

main()
{
    double sum, asciitofloat(char[]); /* declare asciitofloat as double */
    char line[MAXLINE];
    int getln(char[], int);

    sum = 0;
    while (getln(line, MAXLINE) > 0)
        printf("\t%g\n", sum += asciitofloat(line));

    return 0;
}