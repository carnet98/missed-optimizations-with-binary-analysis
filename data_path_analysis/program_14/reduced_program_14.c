 static int a = 7;
 static int *b = &a;
 static int **c = &b;
int main() {
  if (a)
    **c = 0;
}
