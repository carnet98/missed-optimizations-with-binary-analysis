int a;
short b;
int main() {
  if (b) {
    int *c = &a;
    *c = 0;
  }
}
