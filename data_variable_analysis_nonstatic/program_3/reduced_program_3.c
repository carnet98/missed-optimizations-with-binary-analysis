#include "csmith.h"
volatile uint32_t a;
static int32_t b[4][6][9] = {6};
int main() {
  int c, d, e;
  for (c = 0; c < 4; c++)
    for (d = 0; d < 6; d++)
      for (e = 0; e < 9; e++)
        a = b[c][d][e];
}
