#include "csmith.h"
 static int16_t a, f, e, d;
 static int32_t b;
 static int32_t *c = &b;
 static int32_t **g = &c;
 static uint32_t h = 1;
 static int32_t *i(int16_t, int32_t *, int32_t);
 static int32_t **j(uint8_t);
 static uint32_t k(uint8_t);
 static uint32_t l() {
  int32_t *m = &b;
  *g = i(a, m, (j(*m), a));
  return f;
}
 static int32_t *i(int16_t, int32_t *, int32_t) { return 0; }
 static int32_t **j(uint8_t n) {
  n || k(0);
  if (h)
    for (; d < 8; d = safe_add_func_int32_t_s_s(d, 2))
      ;
  return 0;
}
 static uint32_t k(uint8_t) {
  for (h = 0;;)
    return e;
}
int main() { l(); }
