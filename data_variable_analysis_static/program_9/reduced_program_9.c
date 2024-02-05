#include "csmith.h"
 static uint32_t a, f, b;
 static uint8_t c;
 static uint32_t *d = &a;
 static uint32_t **e = &d;
 static int32_t *g = &f;
 static uint16_t h() {
  for (; c != 8; c++)
    *g = **e;
  return b;
}
int main() { h(); }
