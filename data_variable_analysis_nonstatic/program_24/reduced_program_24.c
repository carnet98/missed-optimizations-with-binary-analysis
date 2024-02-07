#include "csmith.h"
int32_t a;
int32_t *b;
int32_t *c();
int32_t d() {
  int32_t **e = &b;
  *e = c();
  return 0;
}
int32_t *c() { return &a; }
int main() { d(); }
