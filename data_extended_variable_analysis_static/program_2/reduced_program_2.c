#include "csmith.h"
 static volatile uint32_t a, c;
 static int32_t b;
 static uint32_t d = 5;
 static int8_t e(int32_t, int32_t, uint16_t, int32_t, int32_t);
 static uint32_t f() {
  int16_t g = 0;
  int32_t h = 3;
  b = e(d, g, h, g, h) == b;
  return c;
}
 static int8_t e(int32_t, int32_t, uint16_t, int32_t, int32_t) {
  int32_t i = 2;
  if (d)
    ;
  else
    c = i;
  return d;
}
int main() {
  f();
  a = c;
}
