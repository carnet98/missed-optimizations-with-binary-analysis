int printf(const char *, ...);
int a, c;
short b;
static short d = 2;
char e;
int main() {
  if (d)
    c = 0;
  e = b == 0 ?: b;
  if (e)
    d = 5;
  printf("%X\n", a);
}
