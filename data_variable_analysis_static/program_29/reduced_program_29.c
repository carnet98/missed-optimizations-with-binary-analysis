 static volatile int a, c;
 static int b;
 static int *d = &b;
int main() {
  c = *d;
  a = b;
}
