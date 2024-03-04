int a;
static int b;
static int *c = &b;
int *d();
static char e() {
  int **f = &c;
  *f = d();
  return 0;
}
int *d(int) { return 0; }
int main() {
  e();
  a = b;
}
