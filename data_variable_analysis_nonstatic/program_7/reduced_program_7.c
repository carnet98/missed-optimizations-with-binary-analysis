int a;
int *b = &a;
int main() {
  if (*b) {
    int **c = &b;
    *c = 0;
  }
}
