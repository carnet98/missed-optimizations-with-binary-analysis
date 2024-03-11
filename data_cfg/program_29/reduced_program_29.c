int printf(const char *, ...);
int a, e;
short b;
const int *c;
static const int **d = &c;
int main() {
  for (; 0 <= b; ++b)
    ;
  *d = &e;
  printf("%X\n", a);
}
