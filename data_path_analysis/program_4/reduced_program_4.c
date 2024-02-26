 static int a;
 static short b;
 static short(c)(short d, short e) { return e ?: d; }
int main() {
  int f = a++;
  b = c(0 == f, b);
}
