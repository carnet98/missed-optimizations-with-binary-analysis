#include "csmith.h"
 static volatile uint32_t a;
 static struct {
  uint32_t b;
  uint32_t c;
  uint16_t d;
} e;
 static uint32_t f;
 static uint8_t g() {
  f++;
  for (e.c = 0;;)
    return e.d;
}
int main() {
  g();
  a = e.b;
  a = f;
}
