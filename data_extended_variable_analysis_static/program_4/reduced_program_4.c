int printf(const char *, ...);
 static int a, c;
 static short b = 1;
 static short *d = &b;
int main() {
  c = 7 / b;
  *d = c;
  printf("%X\n", a);
}
