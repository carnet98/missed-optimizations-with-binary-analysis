#include "csmith.h"
 static volatile uint32_t a;
 static int32_t b;
 static int32_t *c;
 static int8_t d;
 static int32_t *e(int32_t *, int8_t, int32_t *);
 static int32_t **f(int32_t **, uint8_t);
 static uint8_t *g(int32_t *, uint8_t, uint32_t, const int32_t *);
 static int32_t h() {
  e(c, b, &b);
  return 0;
}
 static int32_t *e(int32_t *, int8_t, int32_t *) {
  f(&c, 0);
  return 0;
}
 static int32_t **f(int32_t **, uint8_t i) {
  int32_t *j = &b;
  *j = (g(&b, 0, i, &b), i);
  return 0;
}
 static uint8_t *g(int32_t *, uint8_t, uint32_t, const int32_t *l) {
  int8_t *k = &d;
  *k = *l;
  return k;
}
int main() {
  h();
  a = d;
  platform_main_end(0, 0);
}
