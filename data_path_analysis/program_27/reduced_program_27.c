 static volatile long a;
 static long b = 18446744073709551615;
 static int c, d, e;
 static int *f = &c, *g = &d, *h = &d;
 static char i, j, k = 247;
 static char(l)(char m, char n) { return m + n; }
 static int *o();
 static void p();
 static void q() {
  p();
  o();
  *f = 40;
  for (; c <= 8; c++)
    for (; b <= 8; b++)
      ;
}
 static int *o(int) { return g; }
 static void p() {
  int **r[7];
  r[e] = &f;
  i = 3;
  for (; i != 33; i = l(i, 2)) {
    j = b % k;
    *h = j <= (*f == 0) | c;
  }
}
int main() {
  q();
  a = d;
}
