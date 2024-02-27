int a;
struct {
  char b;
  short c;
} static d;
void e() { d.b = 0; }
int main() { a = d.c; }
