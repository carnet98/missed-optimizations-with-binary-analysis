 static long a, d;
 static int b, f, g;
 static int c[4][2][3];
 static short e;
int main() {
  d = 0;
  for (; d < 4; d++) {
    b = 0;
    for (; b < 2; b++) {
      e = 0;
      for (; e < 3; e++)
        c[d][b][e] = 1;
    }
  }
  a = c[f][g][a];
}
