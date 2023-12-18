#include "csmith.h"
uint32_t a, b;
static int32_t *c = &b;
static int32_t d;
uint16_t e(int32_t, uint8_t, uint32_t, int64_t, uint8_t);
int32_t f() { e(a, 0, a, d, d); }
uint16_t e(int32_t g, uint8_t h, uint32_t i, int64_t l, uint8_t j) {
  int32_t **k = &c;
  if (*c)
    **k = j;
}
int main() { f(); }
