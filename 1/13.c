#include <stdio.h>

#define N   20
#define IN  1
#define OUT 0

/* Prints a histogram of the first N words of input */
main() {
  int i, j, c, state, count, word_index, longest;
  int word_length[N];
  int verticals[N];

  state = IN;
  longest = count = word_index = 0;
  while ((c = getchar()) != EOF && word_index < N) {
    if (c == '\n' || c == ' ') {
      word_length[word_index] = count;   
      ++word_index;
      if(count > longest)
        longest = count;
      count = 0;
    }
    else {
      ++count;
    }
  }

  /* Horizontal histogram */
  for(i=0; i < word_index; ++i) {
    printf("%2d: ", i);
    for(j=0; j < word_length[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  /* Vertical histogram */
  for(i=longest; i > 0; --i) {
    for(j=0; j < word_index; j++) {
      if(word_length[j] >= i) 
        printf(" * ");
      else
        printf("   ");
    }
    printf("\n");
  }

  /* x-axis for vertical histogram */
  for(i=0; i < word_index; ++i)
    printf("%2d ", i);

  printf("\n");
}
