#include "csmith.h"
uint32_t a, b;
int32_t *c = &b;
int16_t d;
int16_t *e = &d;
static int32_t **f = &c;
int16_t **g = &e;
int16_t ***h = &g;
int16_t ****i = &h;
uint32_t j() {
  uint32_t *k = 0;
  **f = ****i;
  *f = k;
}
int main() {
  j();
  transparent_crc(a, "", 0);
}
