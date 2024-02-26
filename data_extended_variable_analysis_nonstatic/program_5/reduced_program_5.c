char a, e;
char *b = &a;
signed char **c;
signed char *d;
int main() {
  c = &d;
  *b = 0;
  c && (e = 0);
}
