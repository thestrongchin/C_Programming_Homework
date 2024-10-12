// question: Write a C program that declares a double
// variable and assigns it the value
// 3.14159265358979323846. Use the printf
// function to print this variable with different
// precisions:
// 1. Retain two decimal places.
// 2. Retain five decimal places.
// 3. Retain ten decimal places.

#include <stdio.h>
int main(){
    double pi = 3.14159265358979323846;
    printf("pi = %.2f  \n", pi);
    printf("pi = %.5f \n", pi);
    printf("pi = %.10f \n", pi);
    return 0;
}