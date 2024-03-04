int printf(const char *, ...);
 static int a, b = 10;
 static int *c = &b;
 static int **d = &c, **h = &c;
 static short e;
 static int ***f = &d;
 static long g = 2;
int main() {
  {
    e = 0;
    for (; e != -10; e--) {
      if (*c)
        break;
      if (g) {
        *h = 0;
        g = 0;
        **f = 0;
      }
    }
  }
  printf("%X\n", a);
}
