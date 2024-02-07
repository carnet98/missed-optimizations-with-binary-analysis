#include "csmith.h"
 static uint8_t a = 1;
 static int8_t b;
 static int32_t c;
 static int32_t d = 9;
 static uint16_t e(uint8_t);
 static uint32_t f(uint32_t, uint8_t, int32_t);
 static int32_t g(uint32_t, int8_t, int32_t);
 static uint8_t h() {
  if (e(f(a, a, a)))
    d = 0;
  return a;
}
 static uint16_t e(uint8_t i) {
  uint32_t j = 9;
  c = safe_add_func_uint8_t_u_u(safe_rshift_func_int16_t_s_u(c, j), 8) ^ d;
  return i;
}
 static uint32_t f(uint32_t k, uint8_t l, int32_t) {
  g(a, l, k);
  return a;
}
 static int32_t g(uint32_t, int8_t, int32_t) {
  if (d) {
    uint8_t m = 50;
    d = m;
  }
  return b;
}
int main() { h(); }
