#include "csmith.h"
static int32_t a = 4;
int8_t b;
int16_t c(int32_t, uint16_t);
uint16_t d() {
  c(0, 0);
  return 0;
}
int16_t c(int32_t e, uint16_t) {
  if (b)
    if (a) {
      int32_t *f = &a;
      *f = 0;
    }
  return e;
}
int main() { d(); }
