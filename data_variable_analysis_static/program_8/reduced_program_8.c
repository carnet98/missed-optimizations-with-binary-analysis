#include "csmith.h"
 static int32_t a, s, f, e, c, b;
 static int32_t *d = &c;
 static int32_t *g(int16_t, uint8_t, int8_t);
 static int16_t h(int32_t *, int16_t, uint16_t, int64_t, int32_t *);
 static int64_t i(uint64_t);
 static int32_t j(int64_t, int32_t *, int32_t *);
 static int32_t *k();
 static uint32_t l() {
  int32_t *m = &a;
  int32_t **n = &d;
  *n = g(h(&a, 0, i(a), a, m), f, f);
  return 0;
}
 static int32_t *g(int16_t, uint8_t, int8_t) {
  int32_t *o = &b;
  return o;
}
 static int16_t h(int32_t *, int16_t, uint16_t p, int64_t, int32_t *) { return p; }
 static int64_t i(uint64_t) {
  int32_t *q = &a;
  if (j(0, k(), q))
    for (b = 0; b;)
      0 == d;
  return e;
}
 static int32_t j(int64_t, int32_t *, int32_t *) {
  int32_t *r = &c;
  for (b = 7;;)
    return *r;
}
 static int32_t *k() { return &s; }
int main() { l(); }
