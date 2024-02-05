#include "csmith.h"
 static int32_t a;
 static int32_t b();
 static int32_t c() {
  b();
  a |= 602;
  return a;
}
 static int32_t b() {
  uint32_t d = 9;
  int32_t e = a ^= d;
  return e;
}
int main() { c(); }
