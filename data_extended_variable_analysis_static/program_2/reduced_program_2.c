#include "csmith.h"
 static int16_t a;
 static int32_t *b;
 static int32_t **c = &b;
 static int32_t *d(int32_t *, int8_t);
 static int32_t *e();
 static int32_t f() {
  int32_t **g = &b;
  *g = d(e(), a);
  return 0;
}
 static int32_t *d(int32_t *h, int8_t) { return h; }
 static int32_t *e() {
  int i;
  *c = &i;
  return 0;
}
int main() {
  f();
  platform_main_end(0, 0);
}
