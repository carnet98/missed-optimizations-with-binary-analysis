 static int a;
 static int *b;
 static int **c = &b;
 static int *d();
 static void e() { *c = d(a); }
 static int *d(int *f) { return f; }
int main() { e(); }
