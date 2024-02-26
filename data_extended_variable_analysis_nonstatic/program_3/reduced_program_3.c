int printf(const char *, ...);
int a, b;
short c;
int main() {
  for (; c; c = c ^ b)
    ;
  printf("%X\n", a);
}
