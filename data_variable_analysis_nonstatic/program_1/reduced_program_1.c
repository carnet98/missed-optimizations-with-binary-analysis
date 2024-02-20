#include "csmith.h"
int32_t a;
static int32_t *b = &a;
const int32_t *c = &a;
const int32_t **d = &c;
const int32_t ***e = &d;
int32_t f() {
  int32_t g = 0;
  if (***e)
    *b = g;
  return 0;
}
int main() { f(); }
