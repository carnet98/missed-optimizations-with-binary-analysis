int printf(const char *, ...);
 static int a;
 static int **b;
 static int *c;
 static int ***d = &b, ***e = &b;
int main() {
  int *f;
  *e = &f;
  *d = &c;
  printf("%X\n", a);
}
