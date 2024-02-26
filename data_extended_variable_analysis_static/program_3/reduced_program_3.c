int printf(const char *, ...);
 static int a, b, c = 5, d;
 static short(e)(short f, short g) { return f + g; }
int main() {
  b = 0;
  for (; b <= 13; b = e(b, 8))
    for (; c; --c)
      for (; d < 20; ++d)
        ;
  printf("%X\n", a);
}
