#include "csmith.h"
 static volatile uint32_t a, d;
 static int32_t b;
 static int32_t *c = &b;
 static uint32_t e() {
  int32_t f;
  int32_t **g = &c;
  *g = &f;
  return d;
}
int main() {
  e();
  a = b;
}
