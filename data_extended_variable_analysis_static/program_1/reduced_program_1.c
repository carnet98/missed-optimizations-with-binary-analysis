#include "csmith.h"
 static volatile uint32_t a, b;
 static struct {
  unsigned c : 6;
} d, e;
 static int16_t f() {
  e = d;
  return b;
}
int main() {
  f();
  a = e.c;
  platform_main_end(0, 0);
}
