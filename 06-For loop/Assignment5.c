/*
 Question: Write a program, with variable A, that increments from 5-10
 Have variable B decreases from 10-5.
 In each iteration, the sum of A and B is added to variable "sum"
 The conditon for each variable is "a <= 10" and "b >= 5"
*/
#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    int sum = 0;

    for(a = 5, b = 10; a <= 10; a++, b--){
        sum = sum+a+b;
    }

    printf("Current number is: %d", sum);
    return 0;
}


