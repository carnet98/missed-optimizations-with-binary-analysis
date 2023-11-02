#include <stdio.h>
int global;

int main(int argc, const char **argv){
    global = 5;
    for(int i = 0; i < 10; i++){
        printf("%d\n", i);
    }
    return   1;
}