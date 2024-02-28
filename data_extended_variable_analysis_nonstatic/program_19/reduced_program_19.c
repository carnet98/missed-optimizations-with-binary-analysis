int printf(const char *, ...);
int a, b;
static short c;
void d() { c = 0; }
int main() {
  b = c;
  printf("%X\n", a);
}
