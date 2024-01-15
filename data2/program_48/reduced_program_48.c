#include "csmith.h"
volatile uint32_t a, f;
int32_t b;
int32_t *c = &b;
int32_t **d = &c;
int32_t ***e = &d;
uint32_t g() {
  *e = 0;
  return f;
}
int main() {
  g();
  a = b;
}
