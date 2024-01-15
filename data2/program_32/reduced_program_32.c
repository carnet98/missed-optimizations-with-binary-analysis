#include "csmith.h"
volatile uint32_t a, b = 8;
uint32_t c;
uint32_t d() {
  int32_t e = 0;
  if (b)
    ;
  else
    c = 1;
  return e;
}
int main() {
  d();
  a = c;
}
