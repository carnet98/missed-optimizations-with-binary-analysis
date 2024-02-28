int printf(const char *, ...);
 static int a, b, d;
 static int *c = &b;
 static int **e = &c;
int main() {
  *c = 0;
  *e = &d;
  printf("%X\n", a);
}
