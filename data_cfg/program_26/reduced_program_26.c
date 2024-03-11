int printf(const char *, ...);
int a, c, d;
int *b, *e;
int *f() {
  int *g = &d;
  int **h = &b;
  *g = 1;
  *h = &c;
  if (*b)
    for (; d; d = d + 8)
      ;
  return &d;
}
int main() {
  f();
  int **i = &e;
  f();
  *i = f();
  printf("%X\n", a);
}
