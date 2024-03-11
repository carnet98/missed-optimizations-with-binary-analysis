 static volatile int a, b;
 static struct {
  int c;
} d, e;
 static short f;
 static int g;
 static int h;
 static void i() {
  int j[8][8][4];
  g = 0;
  for (; g < 8; g++) {
    h = 0;
    for (; h < 4; h++)
      j[0][g][h] = 2;
  }
  for (; b >= 0; b--)
    d = e;
  for (; d.c; d.c = j[0][d.c][b])
    e = d;
}
int main() {
  i();
  a = f;
}
