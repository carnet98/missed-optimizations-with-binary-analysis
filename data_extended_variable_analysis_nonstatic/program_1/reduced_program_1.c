#include "csmith.h"
volatile uint32_t a;
static int32_t b[9][5];
static int32_t *c = &b[7][0];
uint32_t d() {
  uint8_t e = *c;
  return e;
}
int main() {
  int f, g;
  for (f = 0; f < 9; f++)
    for (g = 0; g < 5; g++)
      a = b[f][g];
}
