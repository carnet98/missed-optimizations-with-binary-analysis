
int global;
int g_12 = 12;

int main(int argc, const char **argv){
    int x = 2;
    int y = 3;
    global = x + y;
    for(int i = 0; i < 10; i++){
        global++;
        g_12 = 2;
    }
    return   1;
}