int printf(const char *, ...);
int a, b;
int *c = &b;
int main() {
  int *d = &b;
  *d = 6 >= *c;
  printf("%X\n", a);
}
