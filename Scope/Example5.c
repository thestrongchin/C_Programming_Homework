#include <stdio.h>

void count(){
    static int num1 = 0;
    int num2 = 0;
    num1++;
    num2++;
    printf("num 1 = %d, num2 = %d \n", num1, num2);
}

int main(){
    count();
    count();
    count();
    return 0;
}