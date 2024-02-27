int printf(const char *, ...);
int a, b;
static int c;
static int *d = &c;
void e() { *d = 0; }
int main() {
  b = c;
  printf("%X\n", a);
}
