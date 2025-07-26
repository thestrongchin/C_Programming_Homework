// Function-like / Parameterized macros

#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // The setup of parameters must be like this, no extra spaces allowed!
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PRINT_INT_VAR(var) printf("age = %d \n", var)
#define INCREMENT(x) ((x) + 1)
#define DEBUG(msg) do { printf("LOG: %s \n", msg); } while(0) // DEBUG CODE!!! This code will only print as long as while is false. USE THIS FOR CAPSTONE 2!

int main(){
    int a = 5;
    int b = SQUARE(a); // Replaced by 5
    int max_val = MAX(a, 10);
    printf("Squared result: %d \n", b);
    printf("Max value: %d \n", max_val);

    int age = 25;
    PRINT_INT_VAR(age); // Replaced with printf (Line 7)

    int incremented_a = INCREMENT(a); // Adds 1 to INCREMENT(a) then puts value into "incremented_a"
    printf("Value of 'a' after increment: %d \n", incremented_a);

    DEBUG("This is a DEBUG message."); // Used to debug the code to make sure it's working. Can be toggled on and off by changing while() to 1 or 0.

    return 0;
}

// TIPS:
// 1. Don't increment twice
// 2. Don't froget the brackets, as this could make the math done by the code wrong (line 5 + 6)
