 static int a[10];
 static int b, d, e, f;
 static char c;
 static short g;
 static int h() {
  for (; f; f++)
    e = d;
  for (; b <= 4; ++b)
    c = -7;
  for (; c >= 0;)
    ;
  return a[6];
}
int main() {
  g = 0;
  for (; g < 10; g++)
    a[g] = 4;
  h();
}
