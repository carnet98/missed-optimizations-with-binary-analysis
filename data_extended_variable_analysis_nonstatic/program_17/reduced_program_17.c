#include "csmith.h"
uint32_t a, f, e, c, b;
int32_t *d = &c;
int32_t *g(uint16_t, int32_t *, uint16_t, uint16_t);
int32_t *h(uint32_t, int16_t, uint32_t, int16_t, uint32_t);
uint32_t i();
int32_t **l();
int32_t **j();
int32_t k() {
  int32_t o = 0;
  g(0, d, o, b);
  return 0;
}
int32_t *g(uint16_t, int32_t *, uint16_t m, uint16_t n) {
  int32_t *r = h(n, 0, b, m, b);
  return r;
}
int32_t *h(uint32_t, int16_t, uint32_t, int16_t, uint32_t) {
  i();
  return 0;
}
uint32_t i() {
  l(j());
  return f;
}
int32_t **l(int32_t **p) {
  if (**p) {
    int32_t *q = &e;
    *q = 0;
  }
  return &d;
}
int32_t **j() { return &d; }
int main() {
  k();
  a = e;
}
