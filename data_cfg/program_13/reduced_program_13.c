int printf(const char *, ...);
int a, b, c, d;
static int e;
char f;
short g;
short(h)(short i, short j) { return i + j; }
unsigned char k();
void l(short i) { i || k(); }
unsigned char k() {
  for (; f; f--) {
    g = d;
    e = d = 0;
  }
  return 0;
}
int main() {
  c = -17;
  for (; c != 11; c = h(c, 7))
    l(c);
  b = e;
  printf("%X\n", a);
}
