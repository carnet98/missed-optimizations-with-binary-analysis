#include "csmith.h"
 static volatile uint32_t a;
 static int32_t b[3];
 static int32_t *c = &b[0];
 static int32_t d() {
  int32_t e = *c = 0;
  return e;
}
int main() {
  int f;
  d();
  for (f = 0; f < 3; f++)
    a = b[f];
}
