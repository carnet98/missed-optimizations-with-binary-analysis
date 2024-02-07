#include "csmith.h"
 static volatile uint32_t a;
 static int32_t b[7][10];
 static uint16_t c() {
  uint16_t d = b[5][9] = 0;
  return d;
}
int main() {
  int e, f;
  c();
  for (e = 0; e < 7; e++)
    for (f = 0; f < 10; f++)
      a = b[e][f];
}
