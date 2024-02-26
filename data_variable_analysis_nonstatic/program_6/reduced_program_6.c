int a;
char(b)(char c, char d) { return c + d; }
int main() {
  for (; a; a = b(a, 3))
    ;
}
