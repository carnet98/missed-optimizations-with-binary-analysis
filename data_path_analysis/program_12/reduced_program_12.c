 static volatile long a;
 static int b, c;
int main() {
  for (; c; ++c)
    ;
  a = b;
}
