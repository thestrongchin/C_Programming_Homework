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

// Fibonacci = 5:
// Code starts fibonacci(5)
// To get fibonacci(5), computer needs fibonacci(4) and fibonacci(3)
// To get fibonacci(4), computer needs fibonacci(3) and fibonacci(2)
// To get fibonacci(3), computer needs fibonacci(2) and fibonacci(1)
// To get fibonacci(2), computer needs fibonacci(1) and fibonacci(0)

// Base case of 1 and 0 met

// Starts returning:

// fibonacci(0) = 0
// fibonacci(1) = 1
// fibonacci(2) = 0 + 1
// fibonacci(3) = 1 + 1
// fibonacci(4) = 1 + 2
// fibonacci(5) = 2 + 3

// final return: 0, 1, 1, 2, 3, 5