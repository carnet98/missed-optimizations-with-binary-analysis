#include "csmith.h"
uint32_t a, c, b;
int32_t *d = &c;
int32_t **e = &d;
int32_t ***f = &e;
int32_t ****g = &f;
const int16_t h(int16_t, uint32_t, int32_t);
int32_t *i(uint32_t, int16_t, int32_t *, int32_t, uint16_t);
int32_t *const j();
uint32_t k() {
  int16_t l = 3;
  int32_t *m = &c;
  if (h(0, a, l) <= a) {
    int32_t *n = &b;
    int32_t o = 0;
    if (safe_mod_func_uint8_t_u_u(*m, b))
      *n = o;
  }
  return c;
}
const int16_t h(int16_t, uint32_t p, int32_t) {
  int32_t q;
  *e = i(a, 0, &q, 0, p);
  ****g = 0;
  return p;
}
int32_t *i(uint32_t, int16_t, int32_t *r, int32_t, uint16_t) {
  j();
  return r;
}
int32_t *const j() {
  int32_t *s = &c;
  for (c = 0;;)
    return s;
}
int main() { k(); }
