#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char *argv[]) {
  for (float fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%.2f\t%.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }

  return 0;
}