#include "csmith.h"
uint32_t a;
static int32_t b;
int32_t *c;
int32_t d() {
  assert(c == &b);
  return 0;
}
int main() { a = b; }
