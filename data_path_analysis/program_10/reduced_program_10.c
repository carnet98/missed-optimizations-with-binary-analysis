#include "csmith.h"
 static int32_t *a;
 static int32_t b;
 static int32_t **c = &a;
 static uint32_t d() {
  int32_t *e = &b;
  *c = e;
  return 0;
}
int main() { d(); }
