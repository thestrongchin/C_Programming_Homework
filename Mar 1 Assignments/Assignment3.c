// Question:
// Predict the output of the following program:
// List why

#include <stdio.h>
int main(){
    int i = 0;
    int j = 0;

    for(; i < 10; i++){
        for(; j < 5; j++){
            printf("This is print");
        }
    }
    return 0;
}

// Prediction:
// "This is print" will print 10 times

// After: 
// Actual: "This will print" printed 5 times