int b = 0;
static int *c = &b;
static int **d = &c;
static int ***e = &d;

void foo() {***e = 1;}
void bar() {**d = 1;}
void baz() {*c = 1;}