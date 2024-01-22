#include "csmith.h"
 static int32_t *a, *d;
 static int32_t **b = &a;
 static uint16_t c;
 static int i;
 static int32_t *e();
 static int32_t *f(uint16_t);
 static int32_t *g(int32_t *, uint8_t);
 static uint32_t h() {
  e();
  return c;
}
 static int32_t *e() {
  int32_t **l = &a;
  *l = f(0);
  return &i;
}
 static int32_t *f(uint16_t) {
  int32_t j;
  g(&j, 0);
  return d;
}
 static int32_t *g(int32_t *k, uint8_t) {
  *b = k;
  return k;
}
int main() { h(); }
