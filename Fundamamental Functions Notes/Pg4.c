//pg 4
//Arguments and Parameters

#include <stdio.h>
int sum(int x, int y){
    return x + y;
}

int main(){
    int a = 5, b = 10;
    int result = sum(a, b);

    printf("Sum: %d \n",result);
    return 0;
}

// Line 5 creates function (sum), with 2 parameters: (x) and (y)
// Line 10 creates variables (a) and (b), which have a value of 5 and 10.
// Line 11 calls function "sum", and tells it to add arguments (a) and (b)
// Line 6 adds arguments (a) and (b), which were passed to parameters (x) and (y). It then returns it to the variable "result".
// Line 13 prints out the final result

// Final output: Sum: 15

