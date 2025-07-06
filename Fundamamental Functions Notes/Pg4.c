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

// Line 5 creates function (sum), with 2 variables (x) and (y)
// Line 10 creates variables (a) and (b), which are equal to 5 and 10. It then passes the parameters 5 and 10 to (x) and (y)
// Line 11 calls sum, and tells it to add (a) and (b)
// Line 6 adds (a) and (b), which were passed to (x) and (y). It then returns it to the variable "result"
// Line 13 prints out the final result

// Final output: Sum: 15