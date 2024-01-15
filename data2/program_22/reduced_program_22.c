#include "csmith.h"
volatile uint32_t a, b;
struct {
  int32_t c;
  int8_t d;
} e;
uint32_t f() {
  e.c = 0;
  return b;
}
int main() {
  f();
  a = e.d;
}
