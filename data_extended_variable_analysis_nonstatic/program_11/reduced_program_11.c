#include "csmith.h"
int32_t a, e, d, b;
static int16_t c = 6;
uint32_t f(int32_t, uint16_t);
int32_t *g(int8_t, uint8_t, int32_t *, int32_t *, uint32_t);
int8_t h() {
  int32_t i = 0;
  int16_t *l = &c;
  int16_t **j = &l;
  f(0, i);
  **j = 0;
  return d;
}
uint32_t f(int32_t, uint16_t) {
  int32_t *k = &b;
  int32_t *p = &a;
  g(0, c, k, p, 0);
  return 0;
}
int32_t *g(int8_t, uint8_t m, int32_t *, int32_t *, uint32_t) {
  int32_t *n = &b;
  int32_t *o = &e;
  *n = m;
  return o;
}
int main() { h(); }
