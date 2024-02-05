#include "csmith.h"
int32_t a;
int32_t b() {
  int32_t *c = &a;
  uint16_t d = 65535;
  int8_t e = *c = safe_div_func_int8_t_s_s(*c, d);
  return e;
}
int main() { b(); }
