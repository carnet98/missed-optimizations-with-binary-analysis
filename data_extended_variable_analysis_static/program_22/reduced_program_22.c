#include "csmith.h"
 static volatile uint32_t a;
 static int32_t b[8][9][3] = {3};
int main() {
  int c, d, e;
  for (c = 0; c < 8; c++)
    for (d = 0; d < 9; d++)
      for (e = 0; e < 3; e++)
        a = b[c][d][e];
}
