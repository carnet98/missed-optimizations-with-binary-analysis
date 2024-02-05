#include "csmith.h"
uint64_t a;
int32_t b;
static int32_t *c = &b;
static int32_t **d = &c;
static int32_t ***e = &d;
static int32_t ****f = &e;
static int32_t *****g = &f;
uint16_t h() {
  *****g = 0;
  return 0;
}
int main() {
  h();
  a = b;
}
