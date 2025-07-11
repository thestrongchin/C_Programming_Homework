// Pg 8
// Function with parameters and return

#include <stdio.h>
int sum_int(int x, int y){
    int result = x + y;
    return result;
}

int main(){
    int catch_result = 0;

    catch_result = sum_int(3, 4);
    printf("Calculated result: %d \n", catch_result);

    return 0;
}

// Line 5 creates a function "sum_int" with 2 parameters: (x) and (y)
// Line 6 tells code that "sum_int" will add (x) and (y) and then move the total of the 2 parameters into variable "result".
// Line 11 creates a variable called "catch_result" with a value of 0
// Line 13 calls for parameters (x) and (y), and then passes arguments (3) and (4) to parameters (x) and (y). It then inserts the total of (x) and (y) into the varable "catch_result". 
// Line 14 prints out the the value of "catch_result"

// Final output: Calculated result: 7