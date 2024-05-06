#include <stdio.h>
#include <string.h>

#define I       1234
#define LI      123456789L
#define ULI     123456789UL
#define D       1.23456789
#define F       1.23456F
#define LD      1.23456789L
#define ZERO    48              /* == '0' */

/* in hexadecimal */
#define VTAB '\xb' /* ASCII vertical tab */
#define BELL '\x7' /* ASCII bell character */

#define MY_STR "Hello, world!"

enum boolean
{
    NO,     /* 0 */
    YES     /* 1 */
};

enum months
{
    JAN = 1,
    FEB, /* 2 */
    MAR, /* 3 */
    APR, /* 4 . . . */
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int strlength(char str[]);

main()
{
    printf("int %d == char %c\n", ZERO, ZERO);

    printf("vtab -> %c, bell -> %c\n", VTAB, BELL);

    printf("MY_STR -> %s\n", MY_STR);
    printf("strlength(MY_STR) -> %d\n", strlength(MY_STR));

    /* strlen() from string.h returns an unsigned long! */
    printf("string.h/strlen(MY_STR) -> %lu\n", strlen(MY_STR));
}

int strlength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
    return i;
}