 static char a;
 static volatile int b, c;
 static int d;
int main() {
  int *e = &d;
  int **f = &e;
  int ***g = &f;
  if (a)
    ;
  else
    c = b = d;
}
