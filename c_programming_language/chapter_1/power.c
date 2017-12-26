#include <stdio.h>

int power(int m, int n);

int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
      printf("%d %d %d\n", i, power(2,1), power(-1,i));
    return 0
}
