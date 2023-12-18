#include "csmith.h"
uint32_t a;
static int32_t b;
static int32_t *c = &b;
static int32_t **d = &c;
int8_t e() { *d = 0; }
int main() { a = b; }
