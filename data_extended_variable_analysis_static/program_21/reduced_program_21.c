#include "csmith.h"
 static uint32_t a[][6];
 static int32_t b, h, e;
 static int32_t *c = &b;
 static int32_t **d = &c;
 static int32_t ***f[] = {&d, &d, &d, &d, &d, &d, &d, &d, &d};
 static int32_t *g = &e;
 static int32_t i(uint16_t, uint32_t, uint8_t, int32_t, uint32_t);
 static uint16_t j() {
  uint32_t k = 5;
  int32_t ***l = &d;
  int32_t **m = &g;
  *g = i(0, 0, k, a[3][4], k);
  **l = *m;
  return h;
}
 static int32_t i(uint16_t n, uint32_t, uint8_t, int32_t, uint32_t) {
  int32_t ****o = &f[8];
  ****o = 0;
  return n;
}
int main() { j(); }
