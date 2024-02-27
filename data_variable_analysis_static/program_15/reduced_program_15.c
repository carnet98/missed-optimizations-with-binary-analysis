 static int a = 7;
 static int b() {
  for (;;) {
    if (!a)
      return 0;
    break;
  }
  a = 0;
  return 0;
}
int main() { b(); }
