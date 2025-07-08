// Pg 10
// Function with no parameters but with return

#include <stdio.h>
int get_random_number(){
    return 42;
}

int main(){
    int number = get_random_number();
    printf("The number is: %d \n", number);
    return 0;
}

// Line 5 creates a function called "get_random_number", that will return a value (42)
// Line 10 calls for the cuntion "get_random_number", and tells it to put the value (42) into the variable (number)
// Line 11 prints out the value the "get_random_number" gave (number)

// Final output: The number is: 42