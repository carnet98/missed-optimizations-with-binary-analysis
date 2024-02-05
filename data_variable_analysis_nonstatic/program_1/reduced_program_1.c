#include "csmith.h"
int32_t a;
uint16_t b;
int32_t *c;
const int32_t *d(uint16_t);
uint16_t *e(uint8_t, uint32_t, int16_t, int32_t);
int32_t *f();
uint16_t g() {
  d(0);
  return 0;
}
const int32_t *d(uint16_t h) {
  e(0, a, 0, h);
  return 0;
}
uint16_t *e(uint8_t, uint32_t, int16_t, int32_t) {
  c = f();
  return &b;
}
int32_t *f() {
  int32_t *i = &a;
  return i;
}
int main() { g(); }
