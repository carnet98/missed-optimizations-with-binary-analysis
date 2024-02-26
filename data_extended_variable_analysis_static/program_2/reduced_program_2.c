int printf(const char *, ...);
 static int a, h;
 static int *b;
 static int **c = &b;
 static int ***d = &c, ***f;
 static int ****e = &d, ****g = &f;
int main() {
  int **i;
  **d = &h;
  *g = &i;
  ***e = 0;
  printf("%X\n", a);
}
