#include "csmith.h"
int32_t a;
int32_t *b;
static int32_t **c = &b;
int32_t d[];
uint32_t e() {
  int32_t *f = &d[0];
  *c = f;
  return a;
}
int main() { e(); }
