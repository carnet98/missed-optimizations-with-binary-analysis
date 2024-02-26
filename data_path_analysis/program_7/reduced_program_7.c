 static int a;
 static int *b = &a;
 static void c();
 static void d() { c(b, b); }
 static void c(int *e, int) { *e = 0; }
int main() { d(); }
