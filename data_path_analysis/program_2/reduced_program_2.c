 static char a, d;
 static short b = 5;
 static int c;
 static int *e = &c;
 static short *f = &b;
int main() {
  if (b)
    *e = 6;
  c || a;
  *f = d;
}
