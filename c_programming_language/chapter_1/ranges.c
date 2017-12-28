#include <limits.h>
#include <stdio.h>

int main(void) {
    printf("Signed Char min: %d\n", CHAR_MIN);
    printf("Signed Char max: %d\n", CHAR_MAX);
    printf("Unsigned Char min: %d\n", UCHAR_MAX);
    printf("---------------------\n\n");

    printf("Signed short min: %d\n", SHRT_MIN);
    printf("Signed short max: %d\n", SHRT_MAX);
    printf("Unsigned short max: %d\n", USHRT_MAX);
    printf("---------------------\n\n");

    printf("Signed int min: %d\n", INT_MIN);
    printf("Signed int max: %d\n", INT_MAX);
    printf("Unsigned int max: %d\n", UINT_MAX);
    printf("---------------------\n\n");

    printf("Signed long min: %ld\n", LONG_MIN);
    printf("Signed long max: %ld\n", LONG_MAX);
    printf("Unsigned long max: %ld\n", LONG_MAX);
    printf("---------------------\n\n");
}
