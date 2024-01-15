#include "csmith.h"
volatile uint32_t a;
int32_t b;
int32_t *c = &b;
int32_t **d[][1] = {{}, {}, {}, {}, {}, {}, &c, &c, &c, &c};
int32_t ***e = &d[8][1];
uint32_t f() {
  int32_t ****g = &e;
  uint8_t h = 7;
  ****g = h;
  return 5;
}
int main() {
  f();
  a = b;
}
