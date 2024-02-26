 static volatile long a;
 static int b, c, d, e;
 static char f;
 static unsigned g;
void(h)();
 static short(i)(short j, short k) { return j + k; }
 static void l() {
  b && (c = 1);
  d = 7;
  for (; d; --d)
    if (c) {
      if (f == 3)
        continue;
      for (; e != 4; e = i(e, 1)) {
        --f;
        ++g;
      }
    }
}
int main() {
  l();
  b = 0 != h;
  a = g;
}
