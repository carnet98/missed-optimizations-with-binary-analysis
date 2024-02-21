#include "csmith.h"
int32_t a, e, b;
static int32_t *c = &b;
static int32_t **d = &c;
int32_t *f(int32_t, uint8_t);
int16_t g() {
  int32_t *h = &a;
  uint32_t i = 4;
  f(*h, i);
  assert(c == &b);
  return 0;
}
int32_t *f(int32_t, uint8_t) {
  if (**d)
    for (; e = 20;)
      ;
  return *d;
}
int main() { g(); }
