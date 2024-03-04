int a;
static int b;
static int *c = &b;
static int **d = &c;
int main() {
  *d = 0;
  a = b;
}
