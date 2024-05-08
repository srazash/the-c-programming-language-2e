#include <stdio.h>

void squeeze(char str[], int ch[], int size);

main()
{
    int remove[] = {'a', 'e', 'i', 'o', 'u'};
    char string[] = "the quick brown fox jumps over the lazy dog";

    squeeze(string, remove, sizeof(remove) / sizeof(remove[0]));

    printf("%s\n", string);
}

void squeeze(char str[], int ch[], int size)
{
    int cdx, idx, jdx;

    for (cdx = 0; cdx < size; cdx++)
    {
        for (idx = jdx = 0; str[idx] != '\0'; idx++)
            if (str[idx] != ch[cdx])
                str[jdx++] = str[idx];
        str[jdx] = '\0';
    }
}