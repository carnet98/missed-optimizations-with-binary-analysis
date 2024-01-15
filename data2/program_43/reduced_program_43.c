#include "csmith.h"
uint32_t a = 7;
int8_t b(int32_t, int32_t, uint32_t, int8_t);
uint16_t c() {
  int32_t d = 0;
  b(0, 0, a, d);
  return 0;
}
int8_t b(int32_t, int32_t e, uint32_t f, int8_t) {
  if (f)
    for (a = 0; a < 1; a = 1)
      ;
  return e;
}
int main() { c(); }
