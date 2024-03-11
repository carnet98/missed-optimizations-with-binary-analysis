 static long a;
 static int b;
 static short(c)(short d, short e) { return d + e; }
int main() {
  for (; b != 3; b = c(b, 7))
    a ^= 5;
}
