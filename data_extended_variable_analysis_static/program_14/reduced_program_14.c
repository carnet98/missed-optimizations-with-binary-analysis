int printf(const char *, ...);
 static int a, c;
 static volatile long b;
int main() {
  c &= 2;
  b = c;
  printf("%X\n", a);
}
