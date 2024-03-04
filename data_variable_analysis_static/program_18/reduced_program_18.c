 static int a = 7;
 static int *b = &a;
int main() {
  if (a)
    *b = 0;
}
