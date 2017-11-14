#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int c;
    /* typedef enum { false = 0, true } bool; */
    bool isBlanks = false;

    while ((c = getchar()) != EOF) {
       if (c == ' ') {
         isBlanks = true;
       } else if (isBlanks) {
          putchar(' ');
          putchar(c);
          isBlanks = false;
       } else {
          putchar(c);
       }
    }
}
