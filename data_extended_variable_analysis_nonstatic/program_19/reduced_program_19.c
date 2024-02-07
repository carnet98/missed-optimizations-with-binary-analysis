#include "csmith.h"
int32_t a, c, b;
int32_t *d = &b;
int32_t e(int8_t, int16_t, uint64_t, int32_t);
uint32_t f(int32_t, uint32_t, uint64_t, int64_t, int32_t);
int32_t *g();
uint8_t h() {
  uint32_t i = 0;
  int64_t m = 5;
  int32_t j = 8;
  int32_t **k = &d;
  e(f(0, m, a, a, i), m, a, j);
  *k = g();
  return 0;
}
int32_t e(int8_t, int16_t, uint64_t, int32_t) {
  for (c = 0;;)
    return 0;
}
uint32_t f(int32_t, uint32_t, uint64_t, int64_t, int32_t) {
  *d = 0;
  return a;
}
int32_t *g() {
  int32_t *l = &c;
  return l;
}
int main() { h(); }
