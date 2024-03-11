int printf(const char *, ...);
 static int a, c;
 static volatile int b;
 static short d;
 static void e();
 static void f() {
  e(0L);
  d++;
}
 static void e(int) {
  for (;;) {
    --c;
    break;
  }
}
int main() {
  f();
  b = d;
  printf("%X\n", a);
}
