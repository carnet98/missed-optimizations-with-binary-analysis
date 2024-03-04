 static volatile int a;
 static int b;
 static int *c = &b, *d;
int main() {
  int **e = &c;
  int f;
  d = &f;
  *e = d;
  a = b;
}
