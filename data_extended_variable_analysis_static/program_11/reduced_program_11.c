int printf(const char *, ...);
 static int a, c, d;
 static volatile long b;
 static int *e = &d;
 static int **f = &e;
 static unsigned g = 18446744073709551611;
int main() {
  for (;;) {
    for (; c; c--)
      **f = 7;
    **f = 1;
    break;
  }
  b = g;
  printf("%X\n", a);
}
