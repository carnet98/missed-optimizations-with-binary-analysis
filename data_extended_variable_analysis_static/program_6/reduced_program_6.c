#include "csmith.h"
 static int32_t a, f, b;
 static int32_t *c;
 static int32_t **d = &c;
 static int32_t ***e = &d;
 static uint8_t g(uint32_t, int8_t, int32_t, uint16_t, uint32_t);
 static const int8_t h(uint8_t, uint8_t, int8_t);
 static int32_t i() {
  uint8_t m = 0;
  uint8_t j = 8;
  uint32_t k = g(a, h(0, m, m), j, a, a);
  return k;
}
 static uint8_t g(uint32_t, int8_t l, int32_t, uint16_t, uint32_t) {
  e = 0;
  return l;
}
 static const int8_t h(uint8_t, uint8_t, int8_t) {
  int32_t *n = &b;
  **e = n;
  *n = 3;
  return f;
}
int main() { i(); }
