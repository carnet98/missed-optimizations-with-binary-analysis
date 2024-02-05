#include "csmith.h"
 static int32_t a, i, h, c = 5, b;
 static int32_t *d = &b;
 static int32_t **e = &d;
 static int32_t **f = &d;
 static int32_t ***g = &f;
 static int32_t j(uint32_t, int32_t, uint32_t, uint16_t);
 static int32_t *k(int32_t, int32_t *, uint8_t, int32_t *);
 static int32_t *l(uint16_t, uint8_t, uint32_t);
 static uint16_t m() {
  int16_t n = 8;
  int32_t o = j(a, n, n, n);
  return o;
}
 static int32_t j(uint32_t, int32_t, uint32_t, uint16_t) {
  int p = 0;
  int32_t *q = &i;
  k(0, k(p, 0, a, 0), 0, q);
  return 0;
}
 static int32_t *k(int32_t, int32_t *, uint8_t, int32_t *) {
  int32_t ****r = &g;
  ***r = l(a, 0, a);
  return 0;
}
 static int32_t *l(uint16_t, uint8_t, uint32_t s) {
  int32_t *t = &b;
  *e = 0;
  *t = safe_mul_func_int8_t_s_s(((c || h) ^ c) != s, 4) || b;
  return **g;
}
int main() { m(); }
