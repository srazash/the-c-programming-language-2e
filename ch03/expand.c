#include <stdio.h>
#include <ctype.h>

#define LOWER_OFFSET
#define UPPER_OFFSET 'a' - 'A'

void expand(char s1[], char s2[]);

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
        if (s1[i] >= 'a' && s1[i] <= 'z' || s1[i] >= 'A' && s1[i] <= 'Z')
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
        }
    }
}