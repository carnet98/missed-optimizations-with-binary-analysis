#include "csmith.h"
uint32_t a, b;
static int32_t *c = &b;
static int32_t **d = &c;
int8_t e() {
  **d = 0;
  return 0;
}
int main() {
  e();
  a = b;
}
