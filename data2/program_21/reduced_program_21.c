#include "csmith.h"
volatile uint32_t a, b;
int32_t c;
int32_t *d = &c;
int32_t **e = &d;
int32_t f() {
  *e = 0;
  return b;
}
int main() {
  f();
  a = c;
}
