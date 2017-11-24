#include <stdio.h>

#define IN 1 
#define OUT 0

int main(void)
{
    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
          state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("Newlines: %d \nWords: %d \nCharters: %d\n", n1, nw, nc);
}
