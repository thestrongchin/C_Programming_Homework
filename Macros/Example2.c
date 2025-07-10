#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b)) ? (a) : (b)
#define PRINT_INT_VAR(var) printf("Age = %d \n", var)
#define INCREMENT(x) ((x) + 1)
#define DEBUG(msg) do {printf("LOG: %s \n", msg); } while(0)

int main(){
    int a = 5;
    int b = SQUARE(a);
    int max_val = MAX(a, 10);

    printf("Squared result: %d \n", b);
    printf("Max value: %d \n", max_val);

    int age = 25;
    PRINT_INT_VAR(age);

    int incremented_a = INCREMENT(a);
    printf("Value of (a) after increment: %d \n", incremented_a);

    DEBUG("This is a DEBUG message.");

    return 0;
}