#include <stdio.h>

#define MAX 10000

/* count chars in input ; 1st version */

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
      ++nc;
    printf("\n%ld \n", nc);
}
