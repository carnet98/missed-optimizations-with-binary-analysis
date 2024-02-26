int a;
static int b;
void c() {
  for (;; b++)
    ;
}
int main() { a = b; }
