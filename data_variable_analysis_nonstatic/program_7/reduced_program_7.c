#include "csmith.h"
uint64_t a;
static int8_t b[10][2];
int64_t c() {
  int8_t *d = &b[2][0];
  *d = 0;
  return 0;
}
int main() {
  int e, f;
  for (e = f = 0; f < 2; f++)
    a = b[e][f];
}
