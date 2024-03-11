 static volatile long a;
 static int b, d;
 static char c;
int main() {
  b = 0;
  for (; b != 21; ++b) {
    c = 0;
    for (; c < 38; ++c)
      d ^= 1;
  }
  a = 1;
}
