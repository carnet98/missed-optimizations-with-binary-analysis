#include "csmith.h"
 static volatile uint32_t a, g, f;
 static int32_t b;
 static int32_t *c = &b;
 static int32_t **d = &c;
 static int32_t ***e = &d;
 static int16_t h() {
  int32_t *i = &g;
  *i = ***e;
  return f;
}
int main() {
  h();
  a = b;
}
