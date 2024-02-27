int printf(const char *, ...);
 static int a, d;
 static volatile long b;
 static short c;
int main() {
  for (; c; d = 1)
    ;
  b = d;
  printf("%X\n", a);
}
