#include "csmith.h"
uint32_t a, h, g, d, b;
int32_t *c = &b;
int32_t **e = &c;
int32_t ***f = &e;
static int32_t *i = &d;
uint16_t j(int32_t, uint16_t, int32_t);
int32_t k();
uint8_t l() {
  int8_t m = 7;
  j(k(), h, m);
  return g;
}
uint16_t j(int32_t n, uint16_t, int32_t o) {
  ***f = o;
  if (n)
    *i = 0;
  return n;
}
int32_t k() {
  int32_t *p = &b;
  return *p;
}
int main() {
  l();
  a = b;
}
