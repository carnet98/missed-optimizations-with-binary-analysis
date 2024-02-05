#include "csmith.h"
uint32_t a, g, i;
struct b {
  int32_t c;
  uint8_t d;
  uint16_t e;
  uint32_t f;
} l, o;
struct {
  struct b f;
  struct b h;
} p;
int32_t *const j = &g;
static int32_t **k = &j;
int32_t *m;
int32_t **n = &m;
int32_t q();
uint16_t r(uint16_t, uint8_t);
uint8_t s() {
  uint8_t t = (q(r(i, l.d)), l).c >= p.h.f <= o.d <= p.f.f;
  return t;
}
int32_t q() {
  int u;
  int16_t v;
  uint32_t w = 1;
  *n = &u;
  for (v = 5; v; --v)
    **k = w;
  return 0;
}
uint16_t r(uint16_t, uint8_t) {
  uint8_t x = 1;
  *j = x;
  return l.e;
}
int main() {
  s();
  a = g;
}
