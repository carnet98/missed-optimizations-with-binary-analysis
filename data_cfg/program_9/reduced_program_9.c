short a, j;
int b = 10, d, g;
int *c = &b;
static int e;
static int *f = &e;
static int **h = &c, **i = &c;
void k() {
  d = 0;
  for (;;) {
    if (**i)
      break;
    if (*f)
      continue;
    *h = 0;
  }
  j = g = a ^ 5;
}
int main() { k(); }
