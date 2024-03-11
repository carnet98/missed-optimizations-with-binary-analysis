int printf(const char *, ...);
int a, f;
short b;
static char c;
static short d;
static short *e = &d;
int main() {
  short g = c;
  char *h = &c;
  b = 1;
  for (; b; b++)
    for (; g != 3; g = g + 1) {
      *e && (*h = f);
      f = 0;
    }
  printf("%X\n", a);
}
