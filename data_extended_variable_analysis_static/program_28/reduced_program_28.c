int printf(const char *, ...);
 static int a, c, d = 4120702399;
 static volatile int b;
int main() {
  for (; d >= 0;)
    c = 0;
  b = c;
  printf("%X\n", a);
}
