#include <stdio.h>

#define A 97 
#define Z 122

#define N 26

/* Prints a histogram of characters a-z found in input. */
main() {
  int i, j, c, count, word_index, longest;
  int characters[N];

  /* Initialize characters */
  for(i=0; i < N; ++i)
    characters[i] = 0;

  longest = 0;
  while ((c = getchar()) != EOF) {
    if(c >= A && c <= Z) {
      ++characters[c - A];
      if(characters[c - A] > longest)
        longest = characters[c - A];
    }
  }

  /* Horizontal histogram */
  for(i=0; i < N; ++i) {
    printf("%c: ", i + A);
    for(j=0; j < characters[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  /* Vertical histogram */
  for(i=longest; i > 0; --i) {
    for(j=0; j < N; j++) {
      if(characters[j] >= i) 
        printf("* ");
      else
        printf("   ");
    }
    printf("\n");
  }

  /* x-axis for vertical histogram */
  for(i=0; i < N; ++i)
    printf("%1c ", i + A);

  printf("\n");
}
