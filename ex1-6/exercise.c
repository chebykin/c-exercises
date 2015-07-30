#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool c = (bool) getchar() != EOF;

  if (c == 0 || c == 1) {
    printf("c is 0 or 1\n");
  } else {
    printf("c IS NOT 0 or 1\n");
  }

  return 0;
}

