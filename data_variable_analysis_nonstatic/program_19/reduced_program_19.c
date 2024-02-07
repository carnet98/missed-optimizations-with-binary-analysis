#include "csmith.h"
uint32_t a, c, b;
static int32_t *d = &c;
static int32_t **e = &d;
int8_t f(int16_t, uint8_t, uint16_t, int32_t, uint8_t);
int32_t g() {
  uint32_t h = 1;
  f(0, b, h, b, b);
  return 0;
}
int8_t f(int16_t, uint8_t, uint16_t, int32_t, uint8_t) {
  **e = 0;
  return 0;
}
int main() {
  g();
  a = c;
}
