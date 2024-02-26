int printf(const char *, ...);
int a, c;
int *b;
int main() {
  int *d = &c;
  int **e = &b;
  *e = d;
  printf("%X\n", a);
}
