int a;
static int b;
int main() {
  char c = 0;
  for (; c <= 4; ++c)
    for (; b; b = 0)
      for (; a;)
        ;
}
