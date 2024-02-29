 static volatile int a;
 static char b = 10, c;
 static char *d = &c;
int main() {
  if (!b)
    *d = 0;
  a = c;
}
