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

// First loop: Factorial = 5. The code checks if "factorial" is 0 or 1, which it is not. "factorial(5)" then returns 5 * "factorial(4)"
// Second loop: Factorial = 4. The code checks if "factorial" is 0 or 1, which it is not. "factorial(4)" then returns 4 * "factorial(3)"
// Third loop: Factorial = 3. The code checks if "factorial" is 0 or 1, which it is not. "factorial(3)" then returns 3 * "factorial(2)"
// Fourth loop: Factorial = 2. The code checks if "factorial" is 0 or 1, which it is not. "factorial(2)" then returns 2 * "factorial(1)"
// Firth loop. Factorial = 1. The code checks if "factorial" is 0 or 1, which it is. This triggers line 24, which then returns 1.

// If we go up the loops, you will see that it totals to 5 * 4 * 3 * 2 * 1. This equals to 120.

// Final output: The factorial of 5 is 120