#include <stdio.h>
int main(){
    int num1 = 15;
    int num2 = 30;
    int num3 = 0;
    printf("before swap = %d %d\n", num1, num2);
    num3 = num2;
    num2 = num1;
    num1 = num3;
    printf("after swap = %d %d\n", num3, num2);
    return 0;
}