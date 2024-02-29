int printf(const char *, ...);
int a, b, c;
int *d, *e = &b, *f;
static int g;
int **h = &d;
char(i)(char j, char l) { return j - l; }
int *m() {
  int *k = &g;
  b && (*k = 0);
  if (i(3, g))
    *e = c;
  return &b;
}
int main() {
  m();
  {
    if (i(253, g | 9))
      *e = c;
    f = &b;
  }
  *h = f;
  printf("%X\n", a);
}
