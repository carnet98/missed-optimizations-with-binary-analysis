int printf(const char *, ...);
 static int a, c;
 static volatile int b;
 static int *d = &c;
int main() {
  *d = b = c;
  printf("%X\n", a);
}
