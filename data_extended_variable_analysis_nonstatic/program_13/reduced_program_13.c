#include "csmith.h"
int32_t a, c;
static int32_t *b = &a;
static int32_t **d = &b;
static int32_t ***e = &d;
static int32_t ****f = &e;
static int32_t *****g = &f;
int32_t *h(uint32_t, uint32_t, uint8_t);
int8_t i();
int16_t j() {
  uint16_t k = 6;
  h(i(), c, 0);
  return k;
}
int32_t *h(uint32_t, uint32_t, uint8_t) {
  int32_t ***l = &d;
  ***l = 0;
  return ****g;
}
int8_t i() {
  int32_t m = 9;
  for (; a; ++a)
    ;
  return m;
}
int main() { j(); }
