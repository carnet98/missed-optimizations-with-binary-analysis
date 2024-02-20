#include "csmith.h"
 static volatile uint32_t a, d, c = 4;
 static int32_t b;
 static uint32_t e() {
  b &= c;
  return d;
}
int main() {
  e();
  a = b;
  platform_main_end(0, 0);
}
