int a;
int *b;
int **const c = &b;
int main() {
  int *d = &a;
  *c = d;
}
