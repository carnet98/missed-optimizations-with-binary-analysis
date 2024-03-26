int g_1 = 5;
int g_2 = 6;
int main(){
    int x = 3;
    int y = 1;
    g_1 = x;
    if (y == 0){
        g_1 = 3;
    } else {
        g_2 = 2;
    }
    return g_1;
}