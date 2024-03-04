int printf(const char *, ...);
 static int a;
 static int *b;
 static int **c = &b, **e = &b;
 static int ***d = &c;
int main() {
  int f;
  *e = 0;
  **d = &f;
  printf("%X\n", a);
}
