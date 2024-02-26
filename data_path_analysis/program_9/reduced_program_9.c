 static volatile int a, c;
 static char b;
int main() {
  for (; b; b++)
    ;
  a = c;
}
