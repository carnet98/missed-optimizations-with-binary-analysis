int printf(const char *, ...);
 static int a, c;
 static volatile int b;
 static int *d;
int main() {
  d = &c;
  b = c;
  printf("%X\n", a);
}
