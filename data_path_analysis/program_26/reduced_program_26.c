#include "csmith.h"
 static int32_t a, d, b;
 static int32_t *c, *e;
 static uint32_t f(uint16_t);
 static int32_t *g(int32_t *, int16_t, int32_t *, int32_t *);
 static int32_t *h(int32_t, uint8_t, int16_t);
 static int32_t *i(int32_t *, uint16_t, uint16_t);
 static uint16_t v(int16_t, int32_t *, int32_t, int32_t *, int32_t *);
 static int32_t *j(uint8_t, int32_t, uint16_t);
 static int32_t k() {
  uint8_t l = 0;
  f(l);
  return d;
}
 static uint32_t f(uint16_t m) {
  int32_t *n = &a;
  int32_t o;
  uint16_t p = 0;
  int32_t q = 3;
  int32_t **r = &c;
  *r = g(h((i(n, a, v(0, j(a, 0, a), p, &o, &o)), m), a, m), q, e, &q);
  return m;
}
 static int32_t *g(int32_t *s, int16_t, int32_t *, int32_t *) { return s; }
 static int32_t *h(int32_t, uint8_t, int16_t) {
  int32_t *t = &b;
  return t;
}
 static int32_t *i(int32_t *, uint16_t, uint16_t) {
  int32_t *u = 0;
  for (b = 0;;)
    return u;
}
 static uint16_t v(int16_t, int32_t *, int32_t, int32_t *, int32_t *) { return b; }
 static int32_t *j(uint8_t, int32_t, uint16_t) { return &b; }
int main() { k(); }
