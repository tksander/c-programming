#include <stdio.h>

/* coutn chars in input; 2nd version */

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
      ;
    printf("\n Number of chars: %.0f\n", nc);
}
