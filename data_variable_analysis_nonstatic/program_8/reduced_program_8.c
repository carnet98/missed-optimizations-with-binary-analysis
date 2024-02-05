#include "csmith.h"
int32_t a, d;
int8_t b;
static uint16_t c;
int16_t e() {
  int8_t *f = &b;
  *f = c;
  return d;
}
int32_t *g() {
  uint16_t *h = &c;
  *h = 0;
  return &a;
}
int main() { e(); }
