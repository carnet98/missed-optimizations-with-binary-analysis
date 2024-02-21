#include "csmith.h"
 static uint32_t a, b;
 static int32_t *c = &b;
 static int32_t **d = &c;
 static int32_t *e();
 static int32_t *f();
 static int8_t g() {
  e(f());
  return 0;
}
 static int32_t *e() {
  uint16_t h = 2;
  **d = h;
  return 0;
}
 static int32_t *f() {
  for (; a != 5; a = 5)
    if (**d)
      break;
  return *d;
}
int main() { g(); }
