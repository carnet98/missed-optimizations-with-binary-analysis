#include "csmith.h"
 static int32_t a, b;
 static int16_t c(int8_t, uint32_t, int16_t);
 static uint8_t d(int8_t, int32_t);
 static int32_t e(int32_t *, int32_t *, uint32_t, uint8_t);
 static uint8_t f();
 static int16_t g() {
  int32_t h = 0;
  for (; a != -6; a--)
    c(a, a, a);
  return h;
}
 static int16_t c(int8_t, uint32_t i, int16_t) {
  d(i, i);
  return 0;
}
 static uint8_t d(int8_t n, int32_t) {
  uint32_t *j = &b;
  e(&a, &a, 0, f(j));
  return n;
}
 static int32_t e(int32_t *, int32_t *, uint32_t, uint8_t k) {
  uint32_t *l = &b;
  if (k)
    *l = 0;
  return 0;
}
 static uint8_t f(int32_t m) { return m; }
int main() { g(); }
