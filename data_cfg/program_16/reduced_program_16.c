int printf(const char *, ...);
int a, d, f;
static char b = 5, c;
long e, g;
int main() {
  if (b) {
    if (c <= 0)
      g = 0;
    else {
      if (d)
        c = 0;
      f = 8;
    }
    e = 8;
  }
  b = 5;
  printf("%X\n", a);
}
