#include "csmith.h"
uint32_t a, b;
static int32_t *c = &b;
static int32_t **d = &c;
static int32_t ***e = &d;
uint32_t f() {
  ***e = 0;
  return 0;
}
int main() {
  f();
  a = b;
}
