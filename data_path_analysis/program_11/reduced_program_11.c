 static volatile int a;
 static int b;
 static int c;
 static int d;
int main() {
  b = 0;
  for (; b != 10; ++b) {
    ++c;
    d ^= c;
  }
  a = d;
}
