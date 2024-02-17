
int g_1;
int g_2 = 12;

int main(){
    int x = 2;
    int y = 3;
    g_1 = x + y;
    g_2 = 2;
    if (x == 0){
        x = g_1;
        y = g_2;
    } else {
        x = g_2;
        y = g_1;
    }
    g_1 = 2;
    int a = g_1;
    return 0;
}