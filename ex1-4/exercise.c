#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = -50;
  upper = 110;
  step = 10;

  celsius = lower;

  printf("The temperature conversion program.\n");
  printf("CELSIUS FAHR\n");

  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f %10.2f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}

