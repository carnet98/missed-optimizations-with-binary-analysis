#include "csmith.h"
uint64_t a;
struct {
  unsigned b;
} static c, *d = &c, *e = &c, **f = &d;
uint8_t g() {
  *e = **f;
  return 0;
}
int main() {
  g();
  a = c.b;
}
