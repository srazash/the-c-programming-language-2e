#include <stdio.h>

int binsearch(int x, int v[], int n);
int betterbinsearch(int x, int v[], int n);

main()
{
    int target = 15;
    int values[10] = {2, 4, 5, 7, 11, 15, 17, 19, 21, 23};
    int length = 10;

    if (binsearch(target, values, length))
        printf("bs: %d found!\n", target);
    else
        printf("bs: %d not found!\n", target);

    if (betterbinsearch(target, values, length))
        printf("bbs: %d found!\n", target);
    else
        printf("bbs: %d not found!\n", target);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int betterbinsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (x == v[mid])
        return mid;
    else
        return -1;
}