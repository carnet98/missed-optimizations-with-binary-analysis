int a;
int *b;
static int c;

int main() {
  int **e = &b;
  if (*e)
    for (int i = 0; i < 5; i++)
      a++;
  a = c;
}