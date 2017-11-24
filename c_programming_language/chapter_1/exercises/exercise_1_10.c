#include <stdio.h>

int c;

int main (void) 
{
  while ((c = getchar()) != EOF) {
    if (c == '\t') 
    {
      putchar('\\');
      putchar('t');
    }
    if (c == '\b') 
    {
      putchar('\\');
      putchar('b');
    }
    if (c == '\\') 
    {
      putchar('\\');
    }
    if (c != '\t' &&  c != '\b' && c != '\\'){
        putchar(c);
    }
  }
}
