 static volatile int a;
 static int b[15];
 static int c;
 static short d;
 static int *e = &b[5];
int main() {
  *e = c = 0;
  for (; c < 5; c++)
    b[3 + c] = 0;
  a = d;
}
