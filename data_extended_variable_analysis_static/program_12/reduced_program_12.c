int printf(const char *, ...);
 static int a;
 static volatile int b;
 static char c;
 static char *d = &c;
int main() {
  *d = b = c;
  printf("%X\n", a);
}
