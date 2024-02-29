int printf(const char *, ...);
int a, b;
int main() {
  b ^= (char)b;
  printf("%X\n", a);
}
