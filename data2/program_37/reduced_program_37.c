#include "csmith.h"
volatile uint32_t a;
int32_t b;
int32_t *c = &b;
int32_t **d = &c;
int32_t ***e = &d;
int32_t f() {
  *e = 0;
  return 0;
}
int main() {
  f();
  a = b;
}
