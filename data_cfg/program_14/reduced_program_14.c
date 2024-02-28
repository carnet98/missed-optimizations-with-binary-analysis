char a;
int b, c;
short d;
char(e)(char f) { return f + a; }
int(g)(int f) { return f & b ?: b; }
void h() {
  for (; d; d = e(d))
    for (; c != 5; c = g(c))
      ;
}
int main() { h(); }
