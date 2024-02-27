int printf(const char *, ...);
 static int a;
 static volatile int b;
 static short c;
int main() {
  short *d = &c;
  *d &= 10;
  b = c;
  printf("%X\n", a);
}
