#include "csmith.h"
int32_t a, c, b;
const int32_t *d();
int32_t *e(uint32_t, uint8_t, uint16_t, int32_t);
int16_t f() {
  d();
  return 0;
}
const int32_t *d() {
  uint16_t g = 5;
  int32_t *h = e(0, 0, b, g);
  return h;
}
int32_t *e(uint32_t, uint8_t, uint16_t, int32_t) {
  int32_t *i = &a;
  for (; c; c++)
    ;
  return i;
}
int main() { f(); }
