#include "csmith.h"
int32_t *a;
int32_t **b = &a;
uint16_t c;
int8_t d() {
  int32_t e;
  *b = &e;
  return c;
}
int main() {
  d();
  a = 0;
}
