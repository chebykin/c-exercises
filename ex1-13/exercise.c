#include <stdio.h>

#define LENGTH_LIMIT 10

int main()
{
  int c;
  int i = 0;
  int j = 0;
  int k = 0;
  int words[LENGTH_LIMIT];
  int current_count = 0;
  int max_count = 0;

  printf("Enter the text and press Ctrl+D when finished:\n> ");

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t' || c == '\n')) {
      if (current_count > max_count) {
        max_count = current_count;
      }

      if (i >= LENGTH_LIMIT) {
        break;
      } else if (current_count != 0) {
        words[i] = current_count;
        current_count = 0;
        i++;
      }

    } else {
      current_count++;
    }
  }

  printf("\nText histrogram:\n");
  printf("%2s^\n", "");

  for (k = max_count - 1; k >= 0; k--) {
    printf("%2d| ", k + 1);
    for (j = 0; j < i; j++) {
      if (words[j] > k) {
        printf("░");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  printf("   ");

  for (j = 0; j < i; j++) {
    printf("—");
  }

  printf("——>\n    ");

  for (j = 1; j <= i; j++) {
    printf("%d", j);
  }

  printf("\n");

  return 0;
}

