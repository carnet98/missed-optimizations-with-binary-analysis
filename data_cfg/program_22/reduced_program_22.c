int a;
int(c)(int b) { return a == 0 ?: b / a; }
short d;
short(e)() { return d; }
int *f;
char g;
static short h;
static short *i = &h;
char *j = &g;
int p;
int main() {
  {
    int **q = &f;
    *q = &p;
  short n;
    int o = c(e() && 5);
    n = o ?: o;
    *j = *i <= (n != 0);
    *f = 0;
  }
}
