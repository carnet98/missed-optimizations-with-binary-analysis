 static volatile int a, b;
 static char c;
int main() {
  for (; b;)
    c = 0;
  a = c;
}
