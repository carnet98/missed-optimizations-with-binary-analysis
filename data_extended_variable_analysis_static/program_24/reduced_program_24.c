#include "csmith.h"
 static volatile uint32_t a, c;
 static int32_t b;
 static int32_t *d(uint8_t);
 static int16_t e() {
  int32_t f = 0;
  d(f);
  return c;
}
 static int32_t *d(uint8_t) {
  int32_t *g = &b;
  int32_t *h = 0;
  *g ^= 174;
  return h;
}
int main() {
  e();
  a = b;
}
