#include <stdio.h>

int main(void)
{

    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    signed short ss = -23456;
    unsigned short us = 50000;

    int i = -123456;
    signed int si = -654321;
    unsigned int ui = 4000000000U;

    long int li = -1234567890L;
    signed long int sli = -987654321L;
    unsigned long int uli = 3000000000UL;

    long long int lli = -123456789012345LL;
    signed long long int slli = -987654321012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    printf("char               : %c (valeur numérique : %d)\n", c, c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n\n", uc);

    printf("short              : %d\n", s);
    printf("signed short       : %d\n", ss);
    printf("unsigned short     : %u\n\n", us);

    printf("int                : %d\n", i);
    printf("signed int         : %d\n", si);
    printf("unsigned int       : %u\n\n", ui);

    printf("long int           : %ld\n", li);
    printf("signed long int    : %ld\n", sli);
    printf("unsigned long int  : %lu\n\n", uli);

    printf("long long int      : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float              : %f\n", f);
    printf("double             : %lf\n", d);
    printf("long double        : %Lf\n", ld);

    return 0;
}
