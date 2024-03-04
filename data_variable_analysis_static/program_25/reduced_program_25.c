 static volatile int a;
 static struct {
  char b;
  int c;
} d;
 static int *e = &d.c;
int main() { *e = a = d.b; }
