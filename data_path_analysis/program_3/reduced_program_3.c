 static volatile int a, b, c;
 static char d, e, f;
 static short g, h;
 static int i;
 static char(j)(char k, char l) { return k + l; }
 static void m() {
  char n = b = 3;
  f = 0;
  h &= 150;
  g |= n;
  d++;
  e ^= 3;
  c = 0;
  for (; c != 30; c = j(c, 5))
    i++;
}
int main() {
  m();
  a = b;
  a;
  a = a = 0;
  a = d;
  a = e;
  a = a = a = a = f;
  a = a = a = a = a = a = a = a = a = a = a = a = a = c;
  a = g;
  a = h;
  a = a = a = a = 2;
  a = i;
}
