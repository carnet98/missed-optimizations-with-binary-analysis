char a, i;
int *b;
static int **c = &b, **e = &b, **f = &b;
static int ***d = &c;
int g, h;
int main() {
  int **j = *d;
  int k = 5;
  i = a - 4;
  for (; k >= 0; k = i) {
    *j = &g;
    if (*e)
      *f = &h;
  }
}
