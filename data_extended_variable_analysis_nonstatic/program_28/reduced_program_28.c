int printf(const char *, ...);
int a, b;
static int c;
void d() { c = 24; }
int main() {
  b = c;
  printf("%X\n", a);
}
