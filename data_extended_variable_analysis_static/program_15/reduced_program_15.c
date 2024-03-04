int printf(const char *, ...);
 static int a, c;
 static char b;
int main() {
  for (; b < 7; b = c--)
    ;
  printf("%X\n", a);
}
