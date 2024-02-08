#include "csmith.h"
 static uint32_t a, c, b;
 static int32_t *d();
 static int8_t e() {
  uint16_t f;
  for (f = 0; f <= 8; ++f)
    d();
  return b;
}
 static int32_t *d() {
  c = 0;
  return &b;
}
int main() {
  e();
  a = c;
}
