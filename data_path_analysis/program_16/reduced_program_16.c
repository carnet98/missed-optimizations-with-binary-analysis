#include "csmith.h"
 static volatile uint32_t a;
 static uint8_t b[][10];
int main() {
  int c, d;
  for (c = d = 0; d < 10; d++)
    a = b[c][d];
}
