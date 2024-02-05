#include "csmith.h"
 static volatile uint32_t a;
 static uint32_t b[][7];
int main() {
  int c, d;
  for (c = d = 0; d < 7; d++)
    a = b[c][d];
}
