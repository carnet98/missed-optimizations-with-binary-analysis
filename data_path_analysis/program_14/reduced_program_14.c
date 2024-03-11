 static volatile int a, c, f;
 static char b;
static char d;
 static int *e = &c;
 static int g;
 static void h();
 static void i();
 static void j() { h(); }
 static void h(int k) {
  k = 0;
  for (; k <= 31; k++) {
    b = 25;
    for (; b; b--)
      i();
  }
}
 static void i(int k) {
  char *l = &d;
  *l = 0 != &f & k || *e;
  g ^= *e;
}
int main() {
  j();
  a = 1;
}
