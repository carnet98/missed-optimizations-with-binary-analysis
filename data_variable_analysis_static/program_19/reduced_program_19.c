 static volatile int a;
 static int b;
 static char c;
int main() {
  if (c)
    b = 0;
  a = b;
}
