#include "csmith.h"
int32_t a;
static int32_t b;
int16_t c() {
  int8_t d;
  int32_t *e = &b;
  int32_t *f = &a;
  for (d = 0; d < 8; ++d)
    *e = *f;
  *f = 0;
  return b;
}
int main() { c(); }
