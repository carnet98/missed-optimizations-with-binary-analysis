int printf(const char *, ...);
int a;
unsigned *b;
unsigned **c = &b;
int main() {
  unsigned *d;
  unsigned ***e = &c;
  *c && (*e = &d);
  printf("%X\n", a);
}
