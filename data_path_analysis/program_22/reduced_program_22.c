 static volatile unsigned a;
struct b {
  short c;
};
 static struct {
  int d;
  struct b e;
} f;
 static int g, h;
 static void i() {
  h = 20;
  for (; h; --h)
    f.d &= f.e.c;
}
int main() {
  i();
  a = g;
}
