 static int a, c;
 static int *b, *d;
int main() {
  a++;
  if (a)
    d = &c;
  b = d;
}
