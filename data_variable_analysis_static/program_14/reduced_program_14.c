 static int a;
 static int *b = &a, *c, *i = &a;
 static int **d = &c, **j = &c;
 static char e;
 static short f, g, h;
 static void k(int ***) {
  for (; e <= 7; e++)
    *d = b;
}
int main() {
  short *l[] = {&f};
  k(&j);
  &h >= l || g;
  *i = f;
}
