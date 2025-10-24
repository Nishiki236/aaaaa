#include <float.h>
#include <limits.h>
#include<stdio.h>

int main(void)
{
    printf("double maximum: %g\n", DBL_MAX);
    printf("double minimum: %g\n", DBL_MIN);
    printf("double precision: %d\n ", DBL_DIG);

    printf("int maximum: %d\n", INT_MAX);
    printf("int minimum: %d\n", INT_MIN);

    printf("long maximum: %ld\n", LONG_MAX);
    printf("long minimum: %ld\n", LONG_MIN);

    printf("float maximum: %g\n", FLT_MAX);
    printf("float minimum: %g\n", FLT_MIN);
    printf("float precision: %d\n", FLT_DIG);

    printf("char maximum: %d\n", CHAR_MAX);
    printf("char minimum: %d\n", CHAR_MIN);

    printf("short maximum: %d\n", SHRT_MAX);
    printf("short minimum: %d\n", SHRT_MIN);

    printf("long long int maximum: %lld\n", LLONG_MAX);
    printf("long long int minimum: %lld\n", LLONG_MIN);

    printf("long double maximum: %Lg\n", LDBL_MAX);
    printf("long double minimum: %Lg\n", LDBL_MIN);
    printf("long double precision: %d\n", LDBL_DIG);

    return 0;
}
