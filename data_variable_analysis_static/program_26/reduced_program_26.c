 static volatile int a;
 static int b;
 static char(c)(char d, char e) { return d + e; }
int main() {
  b = 0;
  for (; b < 33; b = c(b, 8))
    continue;
  a = b;
}
