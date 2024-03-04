int printf(const char *, ...);
 static int a, d;
 static volatile long b;
 static char c = 1;
 static char e() {
  if (c)
    return 0;
  d = 0;
  for (;;)
    ;
}
int main() {
  e();
  b = d;
  printf("%X\n", a);
}
