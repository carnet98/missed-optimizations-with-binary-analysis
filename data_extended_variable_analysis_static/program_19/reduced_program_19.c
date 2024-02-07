#include "csmith.h"
 static volatile uint32_t a, b;
 static int32_t *c = &b;
 static int32_t d;
 static int32_t e() {
  c++;
  return 0;
}
int main() {
  int f, g;
  e();
  a = b;
  for (g = 0; g < 6; g++)
    for (f = 0; f < 5; f++)
      a = a = d;
}
