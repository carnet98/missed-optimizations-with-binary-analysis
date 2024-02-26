 static int a;
 static int *b = &a, *c;
 static int **d = &c, **e = &b;
 static int *f() {
  **e = 0;
  return *e;
}
int main() { *d = f(); }
