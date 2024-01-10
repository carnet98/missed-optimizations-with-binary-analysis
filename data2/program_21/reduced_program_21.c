#include "csmith.h"
uint32_t a;
struct b {
  unsigned c;
} static d, e;
void f() {
  struct b *g = &d;
  e = d;
  *g = e;
}
int main() { a = d.c; }
