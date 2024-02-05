#include "csmith.h"
 static volatile uint32_t a;
 static int32_t b[7][1][8];
 static int32_t *c = &b[5][0][3];
 static int32_t **d = &c;
 static int32_t ***e = &d;
 static int32_t ****f = &e;
 static int32_t g() {
  int32_t h = 1;
  ****f = h;
  return 0;
}
int main() {
  int i, j, k;
  g();
  for (i = 0; i < 7; i++)
    for (j = k = 0; k < 8; k++)
      a = b[i][j][k];
}
