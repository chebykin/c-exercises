#include <stdio.h>

int main()
{
  int c, blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      blanks++;
    else if (c == '\t')
      tabs++;
    else if (c == '\n')
      newlines++;
  }

  printf("blanks: %d\n", blanks);
  printf("tabs: %d\n", tabs);
  printf("newlines: %d\n", newlines);

  return 0;
}

