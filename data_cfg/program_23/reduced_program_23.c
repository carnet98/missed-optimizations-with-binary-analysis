int printf(const char *, ...);
int a, d, g, i;
static int b = 8;
unsigned c;
static int *e;
static int **f = &e;
int *h;
void j(short k) {
  for (; c; ++c)
    if (k) {
      unsigned *l = &d;
      *l = -k > k;
      if (*l)
        g = i;
      *f = h;
    }
}
int main() {
  j(b);
  *f = 0;
  printf("%X\n", a);
}
