 static volatile int a;
 static short b[27];
 static int c;
int main() {
  c = 0;
  for (; c < 9; c++)
    b[c] = 3;
  a = b[0];
}
