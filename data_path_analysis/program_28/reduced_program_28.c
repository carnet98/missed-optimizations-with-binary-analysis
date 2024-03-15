int printf(const char *, ...);
 static int a, f, j;
 static struct b {
  short c;
  char d;
  int e;
} g[2][8][6];
 static int *h;
 static int **i = &h;
 static char k;
 static void l();
 static void m(int n, short p2, unsigned short) {
  int o;
  short p = 1;
  *i = &o;
  for (; n < 3; n++)
    for (; p < 8; p++) {
      p2 = 0;
      for (; p2 < 6; p2++) {
        struct b q = {};
        g[1][p][p2] = q;
      }
    }
}
 static char r() {
  l();
  return g[0][1][0].c;
}
 static void l() { m(j, k, f); }
int main() {
  r();
  printf("%X\n", a);
}
