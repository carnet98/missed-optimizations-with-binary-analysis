static int *a;
static int **b = &a;
int *c;
int main() { c = *b; }
