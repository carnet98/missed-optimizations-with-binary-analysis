 static volatile int a;
 static int b = 7;
 static int c;
int main() {
  if (b)
    ;
  else
    c = 6;
  a = c;
}
