int a;
int *b;
int main() {
  int **c = &b;
  int *d = &a;
  *c = d;
}
