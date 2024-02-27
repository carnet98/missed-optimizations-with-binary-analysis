int a;
static int b = 3;
static short c;
int main() {
  if (b)
    ;
  else
    --c;
  a = c;
}
