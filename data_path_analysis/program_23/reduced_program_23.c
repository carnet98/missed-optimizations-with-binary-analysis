#include "csmith.h"
 static int32_t a;
 static int32_t *b = &a;
 static uint16_t c() {
  *b = 0;
  int32_t d = 0;
  return d;
}
int main() { c(); }
