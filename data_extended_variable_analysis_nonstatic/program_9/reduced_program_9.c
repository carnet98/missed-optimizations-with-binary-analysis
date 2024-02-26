int printf(const char *, ...);
int a, c;
int *b;
int main() {
  int **d = &b;
  *d = &c;
  printf("%X\n", a);
}
