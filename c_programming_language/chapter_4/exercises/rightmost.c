#include <stdio.h>
#define MAXLINE 1000

int gline(char s[], int lim);
int strindex(char s[], char t[]);

char pattern[] = "ould";

int main(void)
{
    char line[MAXLINE];

    while (gline(line, MAXLINE) > 0) {
        int index = strindex(line, pattern);
        if (index >= 0) {
            printf("Index: %d\n", index);
        }
    }
    return(0);
}

int gline(char s[], int lim)
{
    int c, i;

    i = 0;
    // iterate through the line until end of limit, EOF, or end of line
    while (--lim  > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

/*
 * Returns rightmost pattern in line
 */
int strindex(char line[], char pattern[])
{
    int sInc, j, k;

    // iterate until end of line
    for (sInc = 0; line[sInc] != '\0'; sInc++) {
        // start line index at outer incrementer
        // start check at pattern index 0
        // while not at end of pattern AND line Char equals pattern Char -> go to next Char in Line and Pattern
        for (j = sInc, k = 0; pattern[k] != '\0' && line[j] == pattern[k]; j++, k++)
            ;
        // if we've found at least one match to Pattern AND we interated through the entire pattern
        if (k > 0 && pattern[k] == '\0')
            // return the starting index of the Pattern within Line
            return sInc;
    }
    return -1;
}

