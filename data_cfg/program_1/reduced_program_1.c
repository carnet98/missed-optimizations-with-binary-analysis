#include "csmith.h"
int32_t a, b;
uint8_t c();
uint32_t d() {
  int32_t e = 0;
  for (; a; --a)
    c(a);
  return e;
}
uint8_t c(int32_t f) {
  if (safe_mul_func_int8_t_s_s(f, b))
    b = 0;
  return f;
}
int main() { d(); }
