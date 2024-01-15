#include "csmith.h"
volatile uint32_t a;
int32_t b;
int32_t *c = &b;
int32_t d() {
  assert(c);
  return 0;
}
int main() {
  d();
  a = b;
}
