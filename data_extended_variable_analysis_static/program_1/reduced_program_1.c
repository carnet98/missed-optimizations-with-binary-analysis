#include "csmith.h"
 static volatile uint32_t a, b;
 static int32_t *c = &b;
 static int32_t d;
 static int32_t **e = &c;
 static int8_t f;
 static int32_t *g = &d;
 static uint8_t h;
 static uint32_t i() {
  uint8_t *k = &h;
  int32_t **j = &g;
  **e |= (*k ^= **j) < f;
  return 0;
}
int main() {
  i();
  a = b;
  a = d;
}
