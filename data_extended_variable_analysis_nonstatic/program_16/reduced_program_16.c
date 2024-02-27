int printf(const char *, ...);
int a, b;
int *c;
int main() {
  c = &b;
  printf("%X\n", a);
}
