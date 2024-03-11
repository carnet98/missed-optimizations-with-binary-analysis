 static volatile int a;
 static char b[7][6];
 static int c;
 static int d;
int main() {
  d = 0;
  for (; d < 7; d++) {
    c = 0;
    for (; c < 6; c++)
      b[d][c] = 5;
  }
  a = b[0][0];
}
