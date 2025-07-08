// How question 4 works

#include <stdio.h>
int fibonacci(int n){
    if(n <= 0){
        return 0;
    }

    if(n == 1){
        return 1;
        
    }else{
        return fibonacci (n - 1)+ fibonacci(n - 2);
    }
}

int main(){
    int n = 5;

    for (int i = 0; i < n; i++){
        printf("%d, ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
// Line 4 creates a function (fibonacci) that has a variable called (n)
// Line 5-13 tells the code to check if (n) is under 0 or equal to 0, or equal to 1. If (n) is under 0, it will terminate. If (n) is equal to 1, it will print. 
// Line 18 tells the code to print out 5 fibonacci numbers
// The for loop creates a variable (i) thats equal to 1. It will keep checking if (i) is less than (n). If it its, it will add 1 to (i). After checking, it will print out a fibonacci number. 