#include <stdio.h>

main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ')
      printf("\n");
    else {
      putchar(c);
    }
  }
}
