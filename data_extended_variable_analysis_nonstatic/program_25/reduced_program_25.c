int printf(const char *, ...);
int a;
static int *b;
static int **c = &b;
int *d;
int main() {
  *c = d;
  *c = 0;
  printf("%X\n", a);
}
