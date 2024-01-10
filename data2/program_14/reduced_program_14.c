#include "csmith.h"
int32_t a, d;
int32_t ***b;
static uint32_t c;
int32_t *e;
const int32_t *f(uint8_t, int32_t *, int32_t *, uint32_t);
int32_t *g(int32_t **, uint8_t);
uint16_t h() {
  int32_t *i = &a;
  f(5, i, e, 0);
  return d;
}
const int32_t *f(uint8_t, int32_t *k, int32_t *, uint32_t) {
  int32_t *j = &a;
  for (a = 5; c == 6; c = 9)
    **b = g(&k, 0);
  return j;
}
int32_t *g(int32_t **, uint8_t) { return &a; }
int main() { h(); }
