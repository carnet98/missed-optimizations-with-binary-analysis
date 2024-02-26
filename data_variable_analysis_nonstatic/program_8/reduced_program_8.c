int a;
static int b = 1;
static short c;
int main() {
  b || (c = 7);
  a = c;
}
