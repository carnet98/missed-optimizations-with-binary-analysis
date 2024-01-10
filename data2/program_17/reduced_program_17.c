#include "csmith.h"
uint32_t a;
static int32_t b;
static int32_t *c;
static const int32_t *d();
int8_t **e(int8_t **f) {
  c = d();
  return f;
}
const int32_t *d() { return &b; }
int main() { a = b; }
