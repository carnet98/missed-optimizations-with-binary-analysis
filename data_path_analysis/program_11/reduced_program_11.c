 static int a;
 static int *b = &a;
 static int **c = &b;
 static int ***d = &c;
int main() {
  **c = 0;
  **d = 0;
}
