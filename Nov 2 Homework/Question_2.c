#include <stdio.h>
int main (){
    int a;
    float b;
    printf("Enter an integer and a decimal number with a comma in the middle");
    scanf("%d, %f", &a, &b);
    printf("Ur output: %d and %f", a, b);
    return 0;
}  