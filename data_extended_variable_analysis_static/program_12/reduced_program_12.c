int printf(const char *, ...);
 static int a, d;
 static int *b;
 static int **c = &b;
int main() {
  if (b)
    *c = &d;
  printf("%X\n", a);
}
