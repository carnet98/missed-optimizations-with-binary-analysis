int printf(const char *, ...);
 static int a, c, d;
 static volatile int b;
int main() {
  for (; c;)
    d = 0;
  b = d;
  printf("%X\n", a);
}
