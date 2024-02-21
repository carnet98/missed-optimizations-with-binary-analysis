#include "csmith.h"
uint16_t a;
int32_t b;
uint32_t c;
uint8_t d(uint16_t);
uint8_t e() {
  int32_t *f = &b;
  *f |= 0;
  *f = d(a) || *f;
  return 0;
}
uint8_t d(uint16_t) { return c; }
int main() {
  e();
  platform_main_end(0, 0);
}
