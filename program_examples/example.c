int g_1 = 5;
int g_2 = 6;
int x = 2;
int y = 3;
int main(){
    g_1 = x;
    if (y == 0){
        g_1 = 3;
    } else {
        g_2 = 2;
    }
    return g_1;
}