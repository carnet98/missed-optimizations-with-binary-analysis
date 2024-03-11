 static volatile int a, d;
 static int b;
 static int c[4];
int main() {
  b = 3;
  for (; b >= 0; b--)
    c[b] = c[b] <= 5;
  a = d;
}
