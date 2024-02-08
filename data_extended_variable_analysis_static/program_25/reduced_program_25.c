#include "csmith.h"
 static volatile uint32_t a, o, m;
 static struct b {
  uint32_t c;
  uint16_t d;
  int32_t e;
} g;
 static struct f {
  int32_t c;
  uint8_t d;
} w;
 static int32_t *h = &g.e;
 static int32_t **l[];
 static int32_t **n = &h;
 static uint16_t p[][6][8];
 static struct b q(uint32_t, uint8_t, struct b v, int16_t, uint8_t) {
  for (; w.c; v.d++)
    l[v.d] = &h;
  return v;
}
 static uint32_t r(uint16_t, uint32_t, struct b, uint32_t);
 static int32_t s() {
  struct f t = {};
  struct b u = {};
  q(r(0, o, u, p[0][3][1]), t.c, u, u.d, m);
  return u.e;
}
 static uint32_t r(uint16_t, uint32_t, struct b, uint32_t) {
  *n = 0;
  return w.d;
}
int main() {
  int i, j, k;
  s();
  a = g.c;
  for (i = j = 0; j < 6; j++)
    for (k = 0; k < 8; k++)
      a = p[i][j][k];
}
