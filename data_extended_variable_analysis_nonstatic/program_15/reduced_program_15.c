#include "csmith.h"
volatile uint32_t a, c, b;
int32_t *d;
static int32_t e;
int8_t f(int16_t, uint32_t, uint8_t);
int32_t g(uint32_t, int32_t, int8_t, int16_t);
int32_t **h(int16_t);
int32_t *i();
uint32_t j() {
  int32_t k = 0;
  f(b, k, k);
  return c;
}
int8_t f(int16_t l, uint32_t, uint8_t) {
  g(l, 0, 1, 1);
  return c;
}
int32_t g(uint32_t o, int32_t, int8_t, int16_t) {
  h(b);
  return o;
}
int32_t **h(int16_t) {
  int32_t **m = 0;
  i();
  return m;
}
int32_t *i() {
  int32_t **n = &d;
  e |= 1;
  return *n;
}
int main() {
  j();
  a = c;
  a = e;
}
