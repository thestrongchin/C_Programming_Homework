#include <stdio.h>
int main(){
    int a = 0; 
    int b = 1;
    int c = 0; 

    for(a = 0, b = 1; a <= 10; a++, b++){
        c = a + b;
        printf("%d %d %d \n", a, b, c);

    }
    return 0;
}