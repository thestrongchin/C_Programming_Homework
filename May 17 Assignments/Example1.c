#include <stdio.h>
long long factorial(int n);

int main(){
    int number;
    printf("Enter a non negative integer: ");
    scanf("%d", &number);

    if (number < 0){
        printf("Factorial is not defined for negative numbers. \n");
    }else{
        printf("The factorial of %d is %lld \n", number, factorial(number));
    }
    return 0;
}

long long factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}