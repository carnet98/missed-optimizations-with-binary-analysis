 static int a;
 static long b;
 static long *c = &b;
 static int *d = &a, *e = &a;
 static int **f = &d;
int main() {
  *d;
  *f = 0;
  *e = *c;
}
