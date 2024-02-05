#include "csmith.h"
 static int32_t a;
 static int32_t *b = &a;
 static uint32_t c() {
  *b = 0;
  return 0;
}
int main() { c(); }
