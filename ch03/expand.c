#include <stdio.h>

#define CASE_OFFSET ('a' - 'A')
#define DASH '-'
#define BLANK ' '

void expand(char s1[], char s2[]);
int isAlpha(char c);
int isUpper(char c);
int isLower(char c);
int isNum(char c);
char toUpper(char c);
char toLower(char c);

main()
{
    char s1[255] = "The letters a-D and the numbers -1-3-4 will be used interchangebly.";
    char s2[255];

    expand(s1, s2);
}

void expand(char s1[], char s2[])
{
    int i, j, k, l;

    char start, end;
    int gap;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        if (isAlpha(s1[i]) && s1[i + 1] == DASH)
        {
            start = s1[i];
            gap = i + 2;

            while (s1[gap + 1] != BLANK)
                gap++;

            end = s1[gap];

            if (isUpper(start) || isUpper(end))
                start = toUpper(start), end = toUpper(end);

            char out[100];
            for (k = start, l = 0; k <= end; k++)
            {
                out[l] = k, l++;
                if (k != end) {
                    out[l] = ',', l++;
                }
            }

            i += gap;

            printf("%c(%d)-%c(%d)\n", start, start, end, end);
            printf("%s\n", out);
        }
        else if (isNum(s1[i]) && s1[i + 1] == DASH)
        {
            start = s1[i];
            gap = i + 2;

            while (s1[gap + 1] != BLANK)
                gap++;

            end = s1[gap];

            char out[100];
            for (k = start, l = 0; k <= end; k++)
            {
                out[l] = k, l++;
                if (k != end) {
                    out[l] = ',', l++;
                }
            }

            i += gap;

            printf("%c(%d)-%c(%d)\n", start, start, end, end);
            printf("%s\n", out);
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
