#include <stdio.h>

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  printf("%3s\t%6s\n", "Cels.", "Fahr.");
  printf("--------------\n");

  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
