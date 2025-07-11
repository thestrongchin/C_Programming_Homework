#include <stdio.h>

int multiply(int num1, int num2){

    return(num1 * num2);
}

int main(){
    int a = 3, b = 4;
    int total = multiply(a, b);

    printf("The total of %d and %d is %d", a, b, total);

    return 0;
}