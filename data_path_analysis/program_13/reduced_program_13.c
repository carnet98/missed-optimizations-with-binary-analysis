 static volatile int a, c;
 static int b;
int main() {
  if (b)
    b = c;
  a = 0;
}
