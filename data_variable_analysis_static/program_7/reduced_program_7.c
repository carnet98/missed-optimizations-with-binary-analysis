 static volatile int a;
 static int b;
 static short c = 1;
int main() {
  if (3 > 0 != c)
    b = 0;
  a = b;
}
