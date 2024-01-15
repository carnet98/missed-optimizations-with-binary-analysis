#include "csmith.h"
int32_t *a;
int32_t b, p, f;
int32_t *c = &b;
int32_t **d = &c;
int32_t ***e = &d;
int32_t **g(int32_t **, int32_t **, uint32_t, int32_t *);
int32_t **h();
int32_t *i();
int32_t j() {
  int32_t **k = &a;
  *e = g(h(i()), k, f, 0);
  return 0;
}
int32_t **g(int32_t **l, int32_t **, uint32_t, int32_t *) {
  int32_t ****m = &e;
  int32_t *****n = &m;
  *l = 0;
  return ***n;
}
int32_t **h() {
  int32_t **o = &c;
  return o;
}
int32_t *i() {
  **d = 0;
  return &p;
}
int main() { j(); }
