#include <stdio.h>
int global;

int main(int argc, const char **argv){
    int x = 2;
    int y = 3;
    global = x + y;
    for(int i = 0; i < 10; i++){
        printf("%d\n", i);
        global++;
    }
    return   1;
}