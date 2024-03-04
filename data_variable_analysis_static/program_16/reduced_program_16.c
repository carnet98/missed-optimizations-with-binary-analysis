 static int a;
 static int *b = &a, *c = &a;
 static unsigned d;
 static char(e)(char f, char g) { return f + g; }
int main() {
  d = 2;
  for (; d; d = e(d, 1))
    *c = *b;
  *c = 0;
  b = 0;
}
