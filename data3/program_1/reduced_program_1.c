#include "csmith.h"
int32_t a, d;
int32_t *b = &a;
int32_t *c = &a;
int32_t *e(uint32_t, uint64_t, int32_t *, const int32_t *, int8_t);
uint16_t f() {
  int32_t g = 0;
  int32_t *h = &d;
  int32_t *i = 0;
  e(0, g, h, i, 0);
  return 0;
}
int32_t *e(uint32_t, uint64_t, int32_t *, const int32_t *, int8_t) {
  int32_t **j = &b;
  if (*c)
    **j = 0;
  return 0;
}
int main() { f(); }
