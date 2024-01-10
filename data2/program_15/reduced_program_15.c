#include "csmith.h"
uint32_t a, b, m, k, g;
struct {
  int8_t c;
  int8_t d;
} i;
struct e {
  unsigned f;
  unsigned c;
} h;
uint16_t j;
static int32_t *l = &g;
static const int32_t n(uint32_t, uint8_t, int32_t, uint8_t);
uint32_t o() {
  uint8_t p = 0;
  uint8_t q = 4;
  *l = n(h.f, k, q, p);
  return b;
}
const int32_t n(uint32_t, uint8_t, int32_t, uint8_t) {
  if (*l) {
    struct e r = {5, 4};
    uint16_t *s = &j;
    int8_t *t = &i.c;
    *t = i.d == (*s && m) && r.c;
  }
  return 0;
}
int main() {
  o();
  a = g;
}
