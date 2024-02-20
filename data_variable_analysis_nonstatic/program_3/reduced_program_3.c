#include "csmith.h"
int32_t a;
int32_t *b;
static int32_t **c = &b;
int32_t *d();
uint16_t e() {
  int32_t ***f = &c;
  **f = d();
  return 0;
}
int32_t *d() {
  int32_t *g = &a;
  return g;
}
int main() { e(); }
