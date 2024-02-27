int printf(const char *, ...);
int a;
static int *b;
static int **c = &b;
int main() {
  int d;
  *c = &d;
  b = 0;
  printf("%X\n", a);
}
