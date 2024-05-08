#include <stdio.h>

void squeeze(char str[], int ch[], int size);
int any(char str[], char ch);

main()
{
    int remove[] = {'a', 'e', 'i', 'o', 'u'};
    char string[] = "the quick brown fox jumps over the lazy dog";

    squeeze(string, remove, sizeof(remove) / sizeof(remove[0]));

    printf("%s\n", string); /* th qck brwn fx jmps vr th lzy dg */
    printf("%d\n", any(string, 'b')); /* 7 */
    printf("%d\n", any(string, 'a')); /* -1 */
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

int any(char str[], char ch)
{
    int pos = -1;
    int idx = 0;

    while (str[idx] != '\0')
    {
        if (str[idx] == ch) {
            pos = idx;
            break;
        }
        idx++;
    }

    return pos;
}