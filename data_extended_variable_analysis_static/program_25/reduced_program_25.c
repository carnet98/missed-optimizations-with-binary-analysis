int printf(const char *, ...);
 static int a, c;
 static volatile int b;
int main() {
  c |= 15;
  b = c;
  printf("%X\n", a);
}
