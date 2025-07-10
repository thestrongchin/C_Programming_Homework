#include <stdio.h>

int callme(void){
    static int call_times = 0;
    return ++call_times;
}

int main(void){
    int i, calling = 0;

    for (i = 0; i < 5; i++){
        calling = callme();
        i++;
    }

    printf("The function has been called %d times \n", calling);
    return 0;
}

// Static local variable called (call_times) created in function "callme"
// Each return, (call_times) increments by 1
// For loop will keep incrementing (i) as long as it's under 5

// Loop 1:
// "callme" is called, which increments (call_times) to 1, then it returns 1.
// (i) increments by 1, then increments by 1 again 
// End of loop: (call_times) = 1, (i) = 2

// Loop 2: 
// "callme" is called, which increments (call_times) to 2, then returns 2.
// (i) increments by 1, then by 1 again. 
// End of loop: (call_times) = 2, (i) = 4

// Loop 3: 
// "callme" is called, then incremnets (call_times) to 3, and returns 3. 
// (i) increments to the required amount of 5, which ends the loop.
// (call_times) is equal to 3 now, so it returns 3 to variable (calling).

// Final output: The function has been called 3 times