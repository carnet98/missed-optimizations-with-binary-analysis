#include "csmith.h"
int32_t a[];
int32_t b, d;
static int32_t *c;
static int32_t **e[][1][1] = {&c, &c, &c, &c};
static int32_t ***f = &e[4][0][0];
static int32_t ****g = &f;
uint32_t h(int16_t, uint8_t, int32_t);
uint8_t i() {
  uint32_t k = 0;
  h(0, 0, k);
  return d;
}
uint32_t h(int16_t j, uint8_t, int32_t) {
  assert(c <= &b || a[0]);
  *g = 0;
  return j;
}
int main() { i(); }
