static long a;
short(b)(short c, short d) { return c - d; }
int main() {
  for (; a; a = b(a, 5))
    ;
}
