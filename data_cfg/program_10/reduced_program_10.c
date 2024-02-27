int a;
char b;
short(c)(short d, short e) { return d - e; }
int main() {
  for (; a; a = c(a, 7))
    if (0 < b)
      b = 0;
}
