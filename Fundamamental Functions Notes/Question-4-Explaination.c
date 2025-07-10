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
// Line 5 is base case 1. It checks if (n) is equal or less than 0. If thats true, it will stop the code.
// Line 9 is base case 2. It checks if (n) is equal to 1. If thats true, it will go to line 20.
// If nothing meets the requirements of line 5 and 9, Line 13 will check.

// Line 13 Is the recursive case. It means that to find the n-th fibonacci number, it will need to call for the fibonacci(n-1) and fibonacci(n-1), and add them together and return the result. 

// Line 18 tells the code how many fibonacci numbers to print
// Line 20 prints out the (n)th fibonacci number up to the fifth.