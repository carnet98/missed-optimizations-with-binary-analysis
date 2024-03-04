int printf(const char *, ...);
int a, f, g;
char b;
int *c;
static int **d = &c;
static int e;
void h(int i) {
  if ((b || i) - e && i)
    e = 5;
}
int main() {
  h(g);
  *d = &f;
  printf("%X\n", a);
}
