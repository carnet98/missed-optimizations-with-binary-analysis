 static int a, e;
 static volatile int b;
 static int c[10];
 static int *d;
int main() {
  e = 0;
  for (; e <= 7; e++) {
    d = &c[e];
    *d = 2;
  }
  b = a;
}
