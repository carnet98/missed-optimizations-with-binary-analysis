int a, c;
static int *b = &a;
int main() {
  if (c)
    *b = 0;
}
