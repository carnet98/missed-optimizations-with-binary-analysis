 static int a, e;
 static short b;
 static short *c = &b, *d = &b;
 static int *f = &a;
int main() {
  int g = a || (*c = *d || e);
  *f = g;
}
