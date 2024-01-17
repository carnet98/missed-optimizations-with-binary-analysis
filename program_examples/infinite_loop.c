int a;
int *b;
static int c;

int main() {
  int **e = &b;
  if (*e)
    for (c = 23;;)
      ;
  a = c;
}