static int a, d;
long b;
int c;
char e;
void f();
void g() { f(b, d, e, &a); }
void f(long, int, long, int *h) {
  int *i = &c;
  *i = *h;
}
int main() { g(); }
