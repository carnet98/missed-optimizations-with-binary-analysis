int printf(const char *, ...);
 static int a, c;
 static volatile int b;
 static short d;
 static char e;
int main() {
  c--;
  d++;
  e++;
  b = c;
  b = d;
  b = e;
  printf("%X\n", a);
}
