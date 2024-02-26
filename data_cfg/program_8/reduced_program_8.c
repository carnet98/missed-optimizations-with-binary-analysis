void __assert_fail();
static char a = 76;
int *b;
 int **c = &b;
 int ***d = &c;
int e;
void f() {
  
  {
    {
      for (; a <= 8; a++)
        if (c)
        __assert_fail();
    }
      
  }
}
int main() { f(); }
