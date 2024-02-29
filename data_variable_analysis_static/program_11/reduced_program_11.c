 static volatile int a;
 static int b;
 static int *c;
int main() {
  c = &b;
  a = b;
}
