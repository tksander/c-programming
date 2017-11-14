#include <stdio.h>

int main() {
    int newlines, blanks, tabs, c;

    newlines = 0;
    blanks = 0;
    tabs = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            newlines++;
        }
        if (c == ' ') {
            blanks++;
        }
        if (c == '\t') {
            tabs++;
        }
    }
    printf("\n NewLines: %d \n Blanks: %d \n Tabs: %d \n", newlines, blanks, tabs);
}
