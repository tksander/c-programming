#include <stdio.h>
#include <string.h>

#define MAX 10000

/** 
 * Deletes each char in s1 that matches any charater in string s2
 */
int main(void)
{
  char s1[MAX];
  char s2[MAX];
  char s3[MAX];
  int i, j, z;
  int notEqual;
  notEqual = 0;

  strcpy(s1, "This is a char array.");
  strcpy(s2, "ab");

  for (i = j = 0; s1[i] != '\0'; i++) {
    for (z = 0; (notEqual != 1) && (s2[z] != '\0') ; z++) {
      if (s1[i] == s2[z]) {
        notEqual = 1;
      }
    }
    if (notEqual == 0) {
      s3[j++] = s1[i];
    }
    notEqual = 0;
  }
  s3[j]  = '\0';
  printf("Final string: %s\n", s3);
  return(0);
}

