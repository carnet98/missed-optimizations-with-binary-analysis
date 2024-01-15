#include "csmith.h"
volatile uint32_t a;
uint32_t b[][4][5];
uint8_t c[][5];
uint16_t d;
uint32_t e() {
  c[0][d] = 0;
  return b[0][2][2];
}
int main() {
  int f, g;
  e();
  for (f = g = 0; g < 5; g++)
    a = c[f][g];
}
