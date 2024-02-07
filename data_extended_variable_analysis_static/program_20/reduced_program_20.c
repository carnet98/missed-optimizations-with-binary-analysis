#include "csmith.h"
 static int32_t a, f, b;
 static int32_t *c;
 static int32_t **d = &c;
 static int32_t ***e = &d;
 static uint16_t g(uint16_t);
 static int16_t h(int32_t, int8_t, uint8_t, int8_t);
 static int16_t i(uint32_t, uint32_t, int16_t, uint32_t, uint32_t);
 static int16_t o(int16_t, int16_t, int32_t, int32_t);
 static int32_t *j(uint8_t, int32_t *, uint32_t, uint16_t, uint8_t);
 static int32_t k() {
  uint32_t l = 2;
  g(l);
  return f;
}
 static uint16_t g(uint16_t m) {
  uint32_t n = 0;
  if (50748 !=
      safe_sub_func_int16_t_s_s(h(a, i(n, o(a, n, m, n), n, m, a), a, n), f))
    return m;
}
 static int16_t h(int32_t, int8_t, uint8_t, int8_t) {
  int32_t **p;
  int32_t ****q = &e;
  *q = &p;
  return f;
}
 static int16_t i(uint32_t, uint32_t, int16_t, uint32_t, uint32_t) {
  int32_t r = 7;
  *d = 0;
  return r;
}
 static int16_t o(int16_t s, int16_t, int32_t, int32_t) {
  int32_t **t = &c;
  *t = j(0, &b, a, 0, s);
  return s;
}
 static int32_t *j(uint8_t, int32_t *u, uint32_t, uint16_t, uint8_t) {
  int32_t **v = &u;
  return *v;
}
int main() { k(); }
