#include "csmith.h"
 static int32_t a, g, d, c;
 static int32_t *b = &a;
 static int32_t **e = &b;
 static int32_t ***f = &e;
 static int32_t ****h = &f;
 static int32_t *i();
 static int32_t o(int32_t *, int8_t, uint8_t);
 static int32_t j() {
  ***h = i();
  return 0;
}
 static int32_t *i() {
  int k = 0;
  int32_t *l = &g;
  *l ^= o(0, k, d);
  return *e;
}
 static int32_t o(int32_t *, int8_t, uint8_t) {
  int32_t *m = &a;
  int32_t *n = &c;
  *n |= *m;
  return *n;
}
int main() { j(); }
