int printf(const char *, ...);
 static int a, c, d;
 static volatile int b;
 static int *e = &c;
 static short f;
 static short g() {
  d = 0;
  return f;
}
int main() {
  e || g();
  b = c;
  printf("%X\n", a);
}
