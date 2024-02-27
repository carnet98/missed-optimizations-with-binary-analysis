int printf(const char *, ...);
int a, c;
int *b;
int main() {
  b = &c;
  printf("%X\n", a);
}
