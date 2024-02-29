 static const int *a;
 static int b, c;
 static const int **d = &a;
 static int *e = &b;
 static void f(int *) {}
int main() {
  f(a);
  for (; c <= 9; ++c)
    for (; b; b = b + 1)
      *d = e;
}
