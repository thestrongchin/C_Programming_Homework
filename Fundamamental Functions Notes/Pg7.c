// Pg 7
// Function with parameters and no return

#include <stdio.h>

void recieve_signal(int a, int b){
    printf("Recieved signals are: %d and %d", a, b);
}

int main(){
    recieve_signal(10, 20);
    return 0;
}

// Line 6: Function called "recieve_signal" with parameters (a) and (b) is created. 
// Line 11: Calls for function "recieve_signal", and passes arguments 10 and 20 to parameters (a) and (b). It will then do what's in "recieve_signal", which is to print out which signals were recieved. 

// Final output: Recieved signals are: 10 and 20
