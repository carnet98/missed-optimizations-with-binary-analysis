#include "csmith.h"
uint32_t a, b;
static uint32_t *c = &b;
static uint32_t **d = &c;
int32_t e() {
  **d = 0;
  return 0;
}
int main() {
  e();
  a = b;
}
