#include "csmith.h"
volatile uint32_t a, d, c;
uint16_t b;
uint32_t e(uint16_t);
int16_t f();
int32_t g() {
  int32_t h = e(c);
  return h;
}
uint32_t e(uint16_t) {
  for (; d;)
    f();
  uint8_t i = 3;
  return i;
}
int16_t f() {
  for (b = 0;;)
    ;
}
int main() {
  g();
  a = b;
}
