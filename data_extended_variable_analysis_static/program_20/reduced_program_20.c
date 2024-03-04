int printf(const char *, ...);
 static int a;
 static volatile long b;
 static short c, d;
int main() {
  if (d)
    --c;
  b = c;
  printf("%X\n", a);
}
