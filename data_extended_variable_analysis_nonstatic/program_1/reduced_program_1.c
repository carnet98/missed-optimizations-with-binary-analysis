#include "csmith.h"
uint32_t a;
static uint32_t b[9][1][8];
int16_t c() {
  int32_t d = 2;
  b[3][0][1] = d;
  return 1;
}
int main() {
  int e, f, g;
  for (e = f = g = 0; g < 8; g++)
    a = b[e][f][g];
  platform_main_end(0, 0);
}
