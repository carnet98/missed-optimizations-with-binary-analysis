
int g_1;
int g_2 = 12;

int main(){
    int x = 2;
    int y = 3;
    g_1 = x + y;
    g_2 = x;
    if (x == 0){
        g_1 = 2;
        x = g_1;
    } else {
        y = g_1;
    }
    return 0;
}