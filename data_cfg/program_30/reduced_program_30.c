int printf(const char *, ...);
int a, b, c;
short d;
static int *e;
char(f)(char g, char h) { return g - h; }
void i();
void j() {
  i();
  d = 0;
  for (; d >= 0; --d)
    ;
}
void i(int g) {
  for (; b > 3; b = f(b, 2))
    if (e)
      for (; g >= 0; --g) {
        int **k = &e;
        *k = &c;
      }
}
int main() {
  j();
  j();
  printf("%X\n", a);
}
