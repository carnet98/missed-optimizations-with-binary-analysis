 static volatile long a;
 static int b;
 static int c[8];
int main() {
  b = 0;
  for (; b < 4; b++)
    c[b] = 9;
  a = c[0];
}
