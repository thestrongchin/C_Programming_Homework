// Pg 11
// Recursive Function
// *Pretend that (n) is equal to 4

#include <stdio.h>
long long factorial(int n);

int main(){
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if(number < 0){
        printf("Factorial is not defined for negative numbers. \n");
    }else{
        printf("The factorial of %d is %lld \n", number, factorial(number));
    }

    return 0;
}

long long factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

// Line 5 creates a function "factorial", with a parameter (n)
// Line 10 and 11 asks for user to enter a positive number, that is stored in variable "number"
// Line 23 calls for function "factorial"
// Line 24 checks if (n) is equal to 0 or 1

// First loop: n = 5. Line 27 multiplies (n) by factorial. Factorial updates to 4, then updates (n) to 4. "number" 5*4.
// Second loop: n = 4. Line 27 multiplies (n) by factorial. Factorial updates to 3, then updates (n) to 3. "number" is 5*4*3.
// Third loop: n = 3. Line 27 multiplies (n) by factorial. Factorial updates to 2, the updates (n) to 2. "number" is 5*4*3*2.
// Fourth loop: n = 2. Line 27 multiplies (n) by factorial. Factorial updates to 1, the updates (n) to 1. "number" is 5*4*3*2*1.
// Firth loop. n = 1. Line 24 recognizes that n == 1 is true, so it returns to line 17, where "factorial" was called.

// Line 17: Factorial(number) has variable "number" in it, which is equal to 5*4*3*2*1. It prints out what 5*4*3*2*1 is equal to.

// Final output: 