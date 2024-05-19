#include <stdio.h>

void escape(char s[], char t[]);

main()
{
    char in[50] = {'n','e','w','\t','l','i','n','e','\n','b','y','e','!'};
    char out[50];

    printf("string in -> %s\n", in);

    escape(out, in);
    printf("string out -> %s\n", out);
}

void escape(char s[], char t[])
{
    int i = 0;
    int j = 0;

    while (t[i] != '\0')
    {
        switch (t[i]) {
            case ('\t'):
                s[j] = '\\';
                j++;
                s[j] = 't';
                break;
            case ('\n'):
                s[j] = '\\';
                j++;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
        i++;
        j++;
    }
}