 static volatile int a;
 static short b;
 static char c;
int main() {
  if (c)
    b = 0;
  a = b;
}
