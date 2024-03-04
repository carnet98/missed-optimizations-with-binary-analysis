int printf(const char *, ...);
 static int a;
 static volatile int b;
 static short c;
int main() {
  c &= 9;
  b = c;
  printf("%X\n", a);
}
