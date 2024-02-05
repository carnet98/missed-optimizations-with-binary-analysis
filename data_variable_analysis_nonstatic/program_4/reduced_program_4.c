#include "csmith.h"
int32_t a;
static int32_t *b = &a;
static int32_t **c = &b;
uint16_t d(uint8_t);
int16_t e();
uint16_t f() {
  int32_t g = 1;
  d(g);
  **c = 0;
  return 0;
}
uint16_t d(uint8_t h) {
  int32_t *i = &a;
  *i = safe_div_func_uint32_t_u_u(safe_rshift_func_uint8_t_u_s(e(), a), h);
  return a;
}
int16_t e() { return a; }
int main() { f(); }
