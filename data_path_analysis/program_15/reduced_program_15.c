 static volatile int a;
 static char b;
 static char *c = &b;
int main() {
  if (b)
    *c = 0;
  a = 3;
}
