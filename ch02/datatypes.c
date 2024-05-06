#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
    char c; /* a single byte representing an ASCII character */
    printf("CHAR_MIN -> %d\n", CHAR_MIN);
    printf("CHAR_MAX -> %d\n", CHAR_MAX);
    printf("UCHAR_MAX -> %u\n", UCHAR_MAX);

    int i; /* an integer value, size aligns with the host machine */
    printf("INT_MIN -> %d\n", INT_MIN);
    printf("INT_MAX -> %d\n", INT_MAX);
    printf("UINT_MAX -> %u\n", UINT_MAX);

    short si; /* a short integer, smaller than an `int` */
    printf("SHRT_MIN -> %d\n", SHRT_MIN);
    printf("SHRT_MAX -> %d\n", SHRT_MAX);
    printf("USHRT_MAX -> %u\n", USHRT_MAX);

    long li; /* a long integer, larger than an `int` */
    printf("LONG_MIN -> %ld\n", LONG_MIN);
    printf("LONG_MAX -> %ld\n", LONG_MAX);
    printf("LONG_MAX -> %lu\n", ULONG_MAX);

    float f; /* single precision floating pointy value */
    printf("FLT_MIN -> %f\n", FLT_MIN);
    printf("FLT_MAX -> %f\n", FLT_MAX);

    double d; /* double precision floating point value */
    printf("DBL_MIN -> %f\n", DBL_MIN);
    printf("DBL_MAX -> %f\n", DBL_MAX);
}