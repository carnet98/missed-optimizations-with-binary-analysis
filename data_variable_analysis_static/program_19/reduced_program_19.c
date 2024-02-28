 static volatile long a;
 static int b, c;
 static int *d = &c;
int main() {
  if (d == &b || d)
    a = b;
}
