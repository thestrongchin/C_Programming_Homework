#include <stdio.h>

#define SQUARE(x) x * x

int main(){
    int result_macro = SQUARE(1 + 2);

    int temp = 1 + 2;
    int result_var = temp * temp;

    printf("Macro SQUARE(1 + 2): %d \n", result_macro);
    printf("Variable square result: %d \n", result_var);

    return 0;
}