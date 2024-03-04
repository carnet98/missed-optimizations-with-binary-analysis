int a, b, c, d;
char e;
int(f)(int g) { return g == 0 || a == 1 ?: a % g; }
void h() {
  int *i = &c;
  d = f(b);
  *i = e;
}
int main() {
  h();
  c = 0;
}
