int printf(const char *, ...);
int a;
long b;
static short c = 7;
static long d;
void e() {
  if (c)
    ;
  else
    --d;
}
int main() {
  b = d;
  printf("%X\n", a);
}
