#include <stdio.h>
int main(void){
    int x = 10;
    int a, b, c;
    a = x++;
    b = ++x;
    c = 10*x++;
    
    printf("x = %d, a = %d b = %d c = %d", x, a, b, c);
    return 0;
}