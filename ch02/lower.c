#include <stdio.h>

void lower(char str[]);

main()
{
    char str[50] = "tHe qUiCk bRoWn fOx jUmPs oVeR ThE SlEePiNg dOg";
    lower(str);

    printf("%s\n", str);
}

void lower(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] += 32 : str[i];
        i++;
    }
}