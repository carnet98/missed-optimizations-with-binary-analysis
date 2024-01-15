#include "csmith.h"
volatile uint32_t a;
struct {
  uint16_t b;
} c;
int32_t d;
int32_t *e = &d;
int32_t **f = &e;
int32_t ***g = &f;
uint32_t h() {
  *g = 0;
  return c.b;
}
int main() {
  h();
  a = d;
}
