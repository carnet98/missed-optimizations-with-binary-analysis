#include "csmith.h"
int32_t a, d, b;
int32_t *c;
int32_t *e(uint8_t, uint8_t);
int32_t f() {
  uint8_t g = 1;
  e(a, g);
  return d;
}
int32_t *e(uint8_t h, uint8_t) {
  for (; h;)
    *c = 4;
  return &b;
}
int main() {
  f();
  c = 0;
}
