int printf(const char *, ...);
int a, b;
int *c;
static int **d = &c;
int main() {
  *d = &b;
  printf("%X\n", a);
}
