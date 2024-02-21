#include "csmith.h"
uint32_t a, b;
static int32_t *c = &b;
static int32_t **d = &c;
int32_t *e(int32_t, int32_t *, int32_t *, uint32_t);
int32_t f() {
  uint16_t g = 0;
  e(0, 0, *d, 0);
  return g;
}
int32_t *e(int32_t, int32_t *, int32_t *h, uint32_t) {
  *h = 0;
  return 0;
}
int main() {
  f();
  a = b;
}
