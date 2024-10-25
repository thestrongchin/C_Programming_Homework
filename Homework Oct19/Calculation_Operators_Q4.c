#include <stdio.h>
int main(){
    float f1 = 9.0;
    float f2 = 0.0;
    float divided = f1/f2;
    
    printf("divided = %f \n", divided);
    return 0;

// The output of this code is equal to "inf" because dividing a floating point number in C will result in inf, not 0.
}