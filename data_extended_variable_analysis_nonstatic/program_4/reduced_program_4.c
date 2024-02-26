int a, b, c, d;
int *e = &d;
short f;
int main() {
  if (b) {
    int *g = &c;
    *g = f;
  }
  *e = 7;
  a = c;
}
