#include <stdio.h>

int f_to_c(int fahr);

/* print fahrenheit-celcius table using a function */
main() 
{
  int fahr, celcius;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step  = 20;

  while(fahr <= upper) {
    printf("%d\t%d\n", fahr, f_to_c(fahr));
    fahr = fahr + step;
  }
}

int f_to_c(int fahr) {
  return 5 * (fahr - 32) / 9;
}
