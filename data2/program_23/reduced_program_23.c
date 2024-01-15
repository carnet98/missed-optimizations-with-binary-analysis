#include "csmith.h"
volatile uint32_t a;
int32_t b[3];
uint32_t c() {
  int16_t d = b[1] = 0;
  return d;
}
int main() {
  int e;
  c();
  for (e = 0; e < 3; e++)
    a = b[e];
}
