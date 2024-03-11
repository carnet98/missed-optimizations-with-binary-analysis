int printf(const char *, ...);
int a, b, c;
short d;
static char e = 10;
int *f;
short(g)(short h) { return h - d; }
void i(int *h) {
  if (e)
    *h = 0;
}
int main() {
  i(&b);
  for (; b; b = g(b))
    e = 7;
  f = &c;
  printf("%X\n", a);
}
