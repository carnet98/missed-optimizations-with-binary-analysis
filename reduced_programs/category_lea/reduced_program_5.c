#include "csmith.h"
int32_t a, h, g, d, c, b;
int32_t *f = &d;
const int8_t i(int16_t, int32_t *, int32_t *);
uint16_t j(uint16_t);
const int8_t k(int32_t, uint16_t, int32_t *);
int32_t *l(int16_t);
int32_t m(uint8_t, uint8_t, int32_t *, int16_t);
int16_t n() {
  int32_t *o = &b;
  i(j(a), f, o);
}
const int8_t i(int16_t p, int32_t *q, int32_t *r) {
  int32_t **s = &f;
  *s = q;
}
uint16_t j(uint16_t t) {
  int32_t *u = &h;
  *f = k(*l(b), t, u);
  return g;
}
const int8_t k(int32_t a, uint16_t b, int32_t *c) { return d; }
int32_t *l(int16_t e) {
  m(0, a, 0, a);
  return &c;
}
int32_t m(uint8_t ag, uint8_t ah, int32_t *ai, int16_t aj) { c = ag; }
int main() { n(); }
