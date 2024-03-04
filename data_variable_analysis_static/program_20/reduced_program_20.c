 static int *a;
 static int b;
 static short c;
 static short *d = &c;
 static int *e = &b;
 static int **f = &a;
int main() {
  a == 0;
  b = *d;
  *f = e;
}
