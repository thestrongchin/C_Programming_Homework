// Predict the output of the following program:
#include <stdio.h>
int main(){
    int i = 1;
    for(;; i++){
        printf("%d\n", i);
    }
    return 0; 
}

// Prediction: Infinite loop counting up by 1
// Reason: There is no stopping number in the for loop


// After: I was right
