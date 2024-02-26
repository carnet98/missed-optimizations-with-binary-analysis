 static volatile int a;
 static char b, c;
int main() {
  for (; c;)
    b = 4;
  a = b;
}
