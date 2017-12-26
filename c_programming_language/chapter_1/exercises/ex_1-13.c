#include <stdio.h>

int main (void)
{
    int c, i, nwhite, nother;
    int num;
    int ndigit[10];

    nwhite = nother = num = 0;
    for (i = 0; i < 10; ++i)
      ndigit[i] = 0;

    while ((c = getchar()) != EOF)
    {
      if (c >= '0' && c <= '9')
      {
        ++ndigit[c - '0'];
      } else if (c == ' ' || c == '\n' || c == '\t') {
        ++nwhite;
      } else {
        ++nother;
      }
    }

    printf("Histogram of Lengths Words");
    for (i = 0; i < 10; ++i) {
      printf("\n Printing %d: ", i);
      for (num = 0; num < ndigit[i]; ++num) {
        printf("0");
      }
    }
    printf("\n");
}
