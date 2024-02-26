int a, b;
short c;
char(d)(char e, char f) { return e + f; }
void g() {
  for (; c; c = d(c, 1))
    for (; a; a += b)
      ;
}
int main() { g(); }
