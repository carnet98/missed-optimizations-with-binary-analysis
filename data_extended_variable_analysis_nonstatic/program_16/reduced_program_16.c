int printf(const char *, ...);
int a, d;
int *b;
static int **c = &b;
int main() {
  *c = &d;
  printf("%X\n", a);
}
