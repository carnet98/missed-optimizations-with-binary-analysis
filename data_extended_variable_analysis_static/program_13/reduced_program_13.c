int printf(const char *, ...);
 static int a, b, h, i;
 static const int *c = &b;
 static const int **d = &c;
 static int *e;
 static char f;
 static int **g = &e;
int main() {
  int j;
  i = **d;
  if (i) {
    h = -4;
    for (; f >= 0; f = h)
      ;
  }
  *g = &j;
  printf("%X\n", a);
}
