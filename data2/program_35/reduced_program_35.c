#include "csmith.h"
volatile uint32_t a, c, b;
int16_t d;
int32_t e;
uint16_t f(int16_t);
int8_t g(uint32_t, int16_t, uint32_t, uint32_t, uint16_t);
uint32_t h() {
  f(0);
  return 0;
}
uint16_t f(int16_t i) {
  g(0, c, b, i, i);
  return i;
}
int8_t g(uint32_t, int16_t j, uint32_t, uint32_t, uint16_t) {
  e = d;
  for (d = 0;;)
    return j;
}
int main() {
  h();
  a = e;
}
