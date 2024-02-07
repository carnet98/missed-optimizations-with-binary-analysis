#include "csmith.h"
 static volatile uint32_t a, b;
 static int32_t c[6][10][1];
 static uint16_t d[4][1];
 static int32_t e() {
  {
    for (c[3][5][0] = 0; 0; 1)
      ;
  }
  return d[2][0];
}
int main() {
  int f, g, h;
  e();
  for (f = 0; f < 6; f++)
    for (g = 0; g < 10; g++)
      for (h = 0; h < 1; h++)
        a = c[f][g][h];
  { ; }
}
