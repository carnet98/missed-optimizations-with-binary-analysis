int a;
struct {
  int b;
  short c;
} static d;
int main() { d.b = a = d.c; }
