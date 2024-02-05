#include "csmith.h"
 static volatile uint32_t a, c;
 static int32_t *b;
 static int32_t d = 2;
 static int32_t *e[] = {&d, &d};
 static int32_t **const f = &e[1];
 static int32_t *const *g = &b;
 static int32_t *const **h = &g;
 static int32_t *const ***i = &h;
 static uint32_t j;
 static int32_t *k(int32_t *, int8_t, uint16_t, int32_t);
 static uint8_t l() {
  int32_t **m = &b;
  *f = k(*m, c, c, 0);
  return 4;
}
 static int32_t *k(int32_t *n, int8_t, uint16_t, int32_t) {
  int32_t *o = &d;
  for (;;) {
    for (j = 0; j <= 2; j++)
      **i = &n;
    if (*o)
      break;
  }
  return n;
}
int main() {
  l();
  a = d;
}
