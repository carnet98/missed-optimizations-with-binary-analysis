#include "csmith.h"
 static struct a {
  int32_t b;
  signed c : 9;
  signed d;
} e;
 static struct {
  int16_t c;
} g;
 static int32_t f, h;
 static int32_t i();
 static int32_t j() {
  int16_t k = 4;
  if (i() ^ k)
    e.c = h;
  return f;
}
 static int32_t i() {
  struct a l = {6093};
  e = l;
  for (e.b = 0; e.b != 4; e.b++)
    ;
  return g.c;
}
int main() { j(); }
