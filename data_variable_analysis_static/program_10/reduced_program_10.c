 static volatile int a;
 static int b;
int main() {
  if (0)
  c:
    for (b = 7; 0;)
      ;
  else if (b)
    goto c;
  a = b;
}
