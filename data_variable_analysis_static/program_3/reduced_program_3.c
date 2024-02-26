 static volatile int a;
 static struct {
  char b;
  int c;
} d;
int main() { d.c = a = d.b; }
