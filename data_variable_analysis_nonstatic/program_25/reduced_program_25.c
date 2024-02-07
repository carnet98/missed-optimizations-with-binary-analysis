#include "csmith.h"
int32_t a;
uint8_t b;
uint8_t *c = &b;
uint8_t **d = &c;
uint8_t ***e = &d;
uint8_t f() {
  for (; a; a--) {
    uint8_t *g = &b;
    if (a == 6 == safe_lshift_func_uint8_t_u_u(*g = 0, 3))
      *g = 5;
  }
  return ***e;
}
int main() { f(); }
