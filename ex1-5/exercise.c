#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = upper;

  printf("The temperature conversion program.\n");
  printf("FAHR CELSIUS\n");

  while (fahr >= lower) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %7.2f\n", fahr, celsius);
    fahr = fahr - step;
  }
  return 0;
}

