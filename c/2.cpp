#include <stdio.h>

int main() {
  int i = 14 >> 2, j = 11 << 2;
  printf("i=%d, j=%d\n", i, j);
  if (i > 2) {
    i = i | 16;
    printf("i=%d, j=%d\n", i, j);
  }
  int k = 0;
  k = j | 16;
  printf("i=%d, k=%d\n", i, k);
  if (j % 2) {
    j = j & 16;
    printf("i=%d, j=%d\n", i, j);
  }
  if (i > j) printf("i=%d, j=%d\n", ++i, --j);
  else printf("i=%d, j=%d\n", --i, ++j);
  
  printf("Done");
  
  return 0;
}

/**
output:

i=3, j=44
i=19, j=44
i=19, k=60
i=18, j=45
Done

**/
