 static short a = 51;
 static char b;
int main() {
  for (; b < 5; ++b)
    a &= 1;
}
