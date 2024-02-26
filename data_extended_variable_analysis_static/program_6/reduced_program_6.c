int printf(const char *, ...);
 static int a;
 static volatile int b;
 static char c, d;
int main() {
  if (d)
    c = 0;
  b = c;
  printf("%X\n", a);
}
