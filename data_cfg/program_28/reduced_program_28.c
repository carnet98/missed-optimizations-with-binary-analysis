int printf(const char *, ...);
int a, c;
long b;
int *d = &c;
static int **e = &d;
char f;
static int ***g = &e;
int main() {
  for (; f; ++f)
    *d ^= 1;
  ***g = 0;
  b = 3291512394;
  printf("%X\n", a);
}
