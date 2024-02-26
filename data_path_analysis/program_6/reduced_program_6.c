 static volatile int a;
 static short b;
 static unsigned *c;
 static unsigned **d = &c;
 static short *e = &b;
int main() {
  *d && (*e = 0);
  a = 5;
}
