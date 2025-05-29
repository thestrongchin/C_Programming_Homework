#include <stdio.h>

int add(int a, int b){
    int c = a + b; 
    return c;
}

int main(){
    int result = add(12,8);
    printf("The result is: %d \n", result);
    return 0;
}