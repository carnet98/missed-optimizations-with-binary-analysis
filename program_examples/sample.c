
int g_1;
int g_2 = 12;

int foo(){
    g_1 = g_2;
    return g_2;
}

int main(){
    int x = 2;
    int y = 3;
    g_2 = foo();
    g_1 = x + y;
    if(g_1){
        g_2 = g_1;
    } else {
        g_2 = 2;
    }
    g_1 = 6;
    return 0;
}