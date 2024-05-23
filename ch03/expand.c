#include <stdio.h>

#define CASE_OFFSET 'a' - 'A'

void expand(char s1[], char s2[]);
int isAlpha(char c);
int isUpper(char c);
int isLower(char c);
int isNum(char c);
char toUpper(char c);
char toLower(char c);

main()
{
    char s1[255] = "The letters a-D and the numbers -1-2-3-4 will be used interchangebly.";
    char s2[255];


}

void expand(char s1[], char s2[])
{
    int i, j;

    int start = 0;
    int end = 0;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        if (isAlpha(s1[i]))
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
                ;
        }
    }
}

int isAlpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int isUpper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int isLower(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

int isNum(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

char toUpper(char c)
{
    if (isLower(c))
        return c - CASE_OFFSET;
    return c;
}

char toLower(char c)
{
    if (isUpper(c))
        return c + CASE_OFFSET;
    return c;
}
