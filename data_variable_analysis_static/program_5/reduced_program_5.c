 static volatile int a;
 static char b = 1, c;
int main() {
  if (b)
    ;
  else
    c = 1;
  a = c;
}
