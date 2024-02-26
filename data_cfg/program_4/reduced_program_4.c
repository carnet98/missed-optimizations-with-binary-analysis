short a, b, f;
struct {
  char c;
  short d;
} static e;
void g() {
  if (e.c) {
    f = a == a % b;
    e.d = 0;
  }
}
int main() {
  g();
  g();
}
