int a;
static int b;
static int *c = &b;
int main() {
  if (c)
    a = b;
}
