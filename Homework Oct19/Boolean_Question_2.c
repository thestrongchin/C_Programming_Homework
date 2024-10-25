#include <stdio.h>
#include <stdbool.h>
int main (){
    int a = 10;
    int b = 20;
    int c = 30;
    bool num1 = a<b;
    bool num2 = b == c;
    bool num3 = a+b>c;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);
    return 0;


}