// Object like, Parameterless Macros

#include <stdio.h>

#define PI 3.14
#define SCREEN_SIZE 800*400
#define MAX 1000
#define VERSION "2.1.3" // <-- This is a string

int main(){
    printf("Pi value is: %f \n", PI); 
    printf("Your screen size is: %d \n", SCREEN_SIZE); // "SCREEN_SIZE" actually does the calculation of 800*400 when it's being defined
    printf("The max value is: %d \n", MAX);
    printf("Version: %s \n", VERSION);

    return 0;
}

// Macros can do operations by themselves, without the need of another line
// You MUST use the correct format specifier when printing a macro
// Declare a macro with #define
// You cannot assign a value to a macro later in the code, it will cause an error