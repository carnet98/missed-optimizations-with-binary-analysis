 static short a, d, e;
 static volatile int b, c;
 static short *f = &d;
int main() {
  e = a + 1;
  for (; e <= 0;)
    c = 9;
  if (c)
    *f = 9;
  b = 4;
}
