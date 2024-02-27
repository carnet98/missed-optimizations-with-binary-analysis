int printf(const char *, ...);
 static int a, c;
 static volatile int b;
int main() {
  c &= 5;
  b = c;
  printf("%X\n", a);
}
