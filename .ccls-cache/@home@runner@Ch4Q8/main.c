#include <stdio.h>

int main(void) {

  // First set of values
  int i = 365, j = 7;
  int nextMultiple = i + j - i % j;
  printf ("The first multiple is: %i\n", nextMultiple);

    // Second set of values
  i = 12258, j = 23;
  nextMultiple = i + j - i % j;
  printf ("The second multiple is: %i\n", nextMultiple);

    // Third set of values
  i = 996, j = 4;
  nextMultiple = i + j - i % j;
  printf ("The third multiple is: %i\n", nextMultiple);

  return 0;
}