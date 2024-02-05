#include "csmith.h"
volatile uint32_t a;
static int32_t b[3][3][7];
int8_t c() {
  for (b[2][2][4] = 0;;)
    ;
}
int main() {
  int d, e, f;
  for (d = 0; d < 3; d++)
    for (e = 0; e < 3; e++)
      for (f = 0; f < 7; f++)
        a = b[d][e][f];
}
