 static volatile int a;
 static int b[20];
 static char c;
int main() {
  c = 0;
  for (; c < 10; c++)
    b[2 + c] = 0;
  a = b[0];
}
