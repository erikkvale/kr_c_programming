#include <stdio.h>

// Copy input to output; 1st version
main() {
  long nc;

  nc = 0;
  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);

}
