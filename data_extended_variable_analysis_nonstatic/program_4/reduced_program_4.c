#include "csmith.h"
int32_t a, e, d, b;
static int32_t *c = &b;
int32_t f(int32_t, uint16_t, int32_t, uint32_t);
int32_t g(uint16_t, uint32_t, uint32_t, int8_t);
int16_t h() {
  int8_t i = 3;
  uint32_t l = d;
  f(g(i, 0, l, l), i, a, a);
  return e;
}
int32_t f(int32_t, uint16_t, int32_t, uint32_t) {
  int32_t *j = &b;
  int32_t **k = &c;
  *k = j;
  *j = 0;
  return 0;
}
int32_t g(uint16_t m, uint32_t, uint32_t, int8_t) {
  int32_t *n = &b;
  *c = *n;
  return m;
}
int main() { h(); }
