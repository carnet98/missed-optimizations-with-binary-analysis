#include "csmith.h"
 static volatile uint32_t a, c;
 static int16_t b;
 static int32_t *d = &c;
 static int32_t **e = &d;
 static int32_t ***f = &e;
 static int16_t *g = &b;
 static int16_t **h = &g;
 static uint8_t i();
 static int32_t j() {
  i();
  int32_t k = 3;
  return k;
}
 static uint8_t i() {
  ***f = **h;
  return 0;
}
int main() {
  j();
  a = b;
}
