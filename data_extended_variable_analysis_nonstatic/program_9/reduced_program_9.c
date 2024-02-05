#include "csmith.h"
volatile uint32_t a, d, b;
int16_t c;
uint8_t e;
uint8_t *f = &e;
uint8_t **g = &f;
uint8_t h(int8_t);
int16_t i() {
  int16_t *j = &c;
  h(0) && (*j = 9);
  return d;
}
uint8_t h(int8_t) { return **g; }
int main() {
  i();
  a = b;
  a = c;
}
