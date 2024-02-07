#include "csmith.h"
int32_t a;
int32_t *b;
int32_t *c(int32_t *, uint8_t, int32_t **, int32_t **);
int32_t **d(uint8_t);
uint8_t e() {
  int32_t *f = &a;
  int32_t **g = &b;
  int32_t h = 9;
  if (*f)
    *g = c(&a, 0, d(a), &f);
  return h;
}
int32_t *c(int32_t *, uint8_t, int32_t **, int32_t **) { return 0; }
int32_t **d(uint8_t) { return 0; }
int main() { e(); }
