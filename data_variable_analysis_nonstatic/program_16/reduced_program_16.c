int a;
int *b;
int main() {
  int **c = &b;
  *c = &a;
}
