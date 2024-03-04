int a;
int *b;
static int **c = &b;
int main() {
  int *d = &a;
  *c = d;
}
