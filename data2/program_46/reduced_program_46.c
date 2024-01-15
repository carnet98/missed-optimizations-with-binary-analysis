#include "csmith.h"
uint32_t a, f, e, d, c = 3, b;
int8_t g(uint16_t);
int8_t h(int8_t, uint8_t, uint8_t, int32_t *);
int8_t i(uint16_t);
uint8_t k() {
  g(b);
  return f;
}
int8_t g(uint16_t j) {
  int32_t *m = 0;
  h(0, j, 0, m);
  return d;
}
int8_t h(int8_t, uint8_t, uint8_t, int32_t *) {
  int32_t *l = &c;
  *l = i(c);
  return 0;
}
int8_t i(uint16_t n) {
  if (c)
    d = n;
  return e;
}
int main() {
  k();
  a = d;
}
