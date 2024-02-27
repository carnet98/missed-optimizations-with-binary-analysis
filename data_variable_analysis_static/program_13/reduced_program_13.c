 static short a;
 static short *b = &a, *d = &a;
 static char c, f;
 static char g() {
  short e[224];
  b = &e[4];
  return c;
}
int main() {
  f = g();
  *d = f;
}
