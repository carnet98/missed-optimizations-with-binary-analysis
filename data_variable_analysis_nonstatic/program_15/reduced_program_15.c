int a;
int *b;
static int c;
int main() {
  if (b == &b)
    a = c;
}
