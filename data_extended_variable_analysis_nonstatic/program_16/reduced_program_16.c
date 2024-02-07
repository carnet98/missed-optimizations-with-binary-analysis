#include "csmith.h"
volatile uint32_t a, d;
static int32_t b;
static int32_t c[10][3][3];
uint8_t e() {
  c[1][1][1] = b;
  return d;
}
int main() {
  int f, g, h;
  for (f = 0; f < 10; f++)
    for (g = 0; g < 3; g++)
      for (h = 0; h < 3; h++)
        a = c[f][g][h];
}
