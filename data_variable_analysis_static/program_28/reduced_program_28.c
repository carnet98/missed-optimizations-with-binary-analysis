 static volatile int a;
 static short b;
 static short *c = &b;
int main() {
  if (c)
    a = b;
}
