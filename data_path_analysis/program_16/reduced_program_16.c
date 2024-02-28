 static int a = 8;
 static unsigned *b;
 static unsigned **c = &b;
 static int *d = &a;
int main() {
  *c = d;
  a || (*b = 0);
}
