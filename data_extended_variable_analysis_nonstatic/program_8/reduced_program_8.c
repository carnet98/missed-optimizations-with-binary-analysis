#include "csmith.h"
int32_t a, c;
int32_t *b = &a;
int32_t *d(int32_t *, uint16_t, int32_t);
uint32_t e() {
  uint8_t f = 9;
  int32_t **g = &b;
  *g = d(b, f, f);
  return 0;
}
int32_t *d(int32_t *h, uint16_t, int32_t) {
  *h = 0;
  for (c = 4;;)
    return &c;
}
int main() { e(); }
