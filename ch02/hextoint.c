#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int htoi(char s[]);

main()
{
    char value1[5] = "0x10"; /* 16 */
    char value2[5] = "0XAA"; /* 170 */
    char value3[5] = "45"; /* 69 */
    char value4[5] = "0x1a4"; /* 420 */

    printf("%s -> %d\n", value1, htoi(value1));
    printf("%s -> %d\n", value2, htoi(value2));
    printf("%s -> %d\n", value3, htoi(value3));
    printf("%s -> %d\n", value4, htoi(value4));
}

int htoi(char s[])
{
    int idx, factor, value;

    for (idx = 0; idx < strlen(s); ++idx)
        s[idx] = tolower(s[idx]);

    idx = 0;

    if (s[0] == '0' && s[1] == 'x')
        idx = 2;

    while (idx < strlen(s))
    {
        if (s[idx] >= '0' && s[idx] <= '9') {
            factor = pow(16, strlen(s) - idx - 1);
            value = value + ((s[idx] - '0') * factor);
        } else if (s[idx] >= 'a' && s[idx] <= 'f') {
            factor = pow(16, strlen(s) - idx - 1);
            value = value + ((s[idx] - 'W') * factor);
        } else {
            return 0;
        }
        ++idx;
    }

    return value - 1;
}