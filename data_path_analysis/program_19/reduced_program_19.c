 static struct a {
  signed b;
  signed c : 7;
  signed : 5;
  signed : 25;
  char d;
} f, *g = &f;
 static int e;
 static int *h = &e;
int main() {
  struct a i = {};
  for (;;) {
    short j;
    *h = f.c;
    j = *h;
    *g = i;
    break;
  }
}
