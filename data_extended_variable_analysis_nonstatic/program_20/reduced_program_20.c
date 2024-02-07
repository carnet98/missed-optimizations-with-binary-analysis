#include "csmith.h"
int32_t a, g, f, b;
int32_t *c;
int32_t **d = &c;
int32_t ***e = &d;
int32_t ****h = &e;
int32_t *****i = &h;
int32_t j(int16_t, int32_t, int16_t, uint32_t);
int32_t k() {
  int32_t *l = &b;
  uint8_t m = 4;
  j(a, *l = a, g, m);
  return f;
}
int32_t j(int16_t, int32_t, int16_t, uint32_t) {
  int32_t *n = &b;
  ****i = n;
  return *n;
}
int main() { k(); }
