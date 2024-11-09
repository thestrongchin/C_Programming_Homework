#include <stdio.h>
int main(){
    char a = 'E'; //Assigns 'E' to a as a character
    int b = 30; //Assigns 30 to b as a integer 
    float c = 5.5; //Assigns 5.5 to c as a floating point number
    float d = a*b - c/2; //Assigns the result of a*b - c/2 to d as a floating point number
    
    printf("converted: %f \n", d); //Prints out the answer of a*b - c/2 as the variable
    return 0;
}