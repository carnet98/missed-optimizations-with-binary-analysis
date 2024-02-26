 static char a;
 static int b = 2;
 static short(c)(short d, short e) { return d + e; }
 static void f() {
  for (; b; b = c(b, 6))
    for (; a; a++)
      ;
}
int main() { f(); }
