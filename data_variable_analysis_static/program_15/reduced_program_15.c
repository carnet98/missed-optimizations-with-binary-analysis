 static volatile int a, b;
 static int c;
 static short d;
int main() {
  for (; b;)
    d = c;
  a = d;
}
