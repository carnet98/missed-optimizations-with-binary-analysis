int printf(const char *, ...);
 static int a;
 static volatile long b;
 static short c = 1, d;
int main() {
  if (c)
    ;
  else
    --d;
  b = d;
  printf("%X\n", a);
}
