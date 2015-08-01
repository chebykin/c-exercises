#include <stdio.h>

#define PREV_BLANK     1
#define PREV_NOT_BLANK 0

int main()
{
  int c, prev;

  prev = PREV_NOT_BLANK;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      if (prev == PREV_NOT_BLANK) {
        putchar('\n');
      }
      prev = PREV_BLANK;
    } else {
      putchar(c);
      prev = PREV_NOT_BLANK;
    }
  }

  return 0;
}

