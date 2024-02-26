int a[6];
int b, c;
short *d;
char e;
void f();
void g();
int h() {
  f();
  return 0;
}
void f() {
  b = 1;
  for (; b <= 5; b++)
    a[b] = 6;
  g();
}
void g() {
  for (; c;) {
    *d = 0;
    if (e)
      break;
  }
}
int main() { h(); }
