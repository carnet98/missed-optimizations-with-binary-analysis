#include "csmith.h"
 static volatile uint32_t a;
 static struct {
  signed b : 18;
  unsigned c;
} d;
 static uint32_t e() {
  int32_t f = d.b = d.c;
  return f;
}
int main() {
  e();
  a = d.c;
}
