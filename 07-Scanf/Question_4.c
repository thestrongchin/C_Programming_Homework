#include <stdio.h>
int main (){
    int a, b, c;
    printf("Enter 3 integers");
    scanf("%d, %d, %d", &a, &b, &c);
    int total = a + b + c;
    printf("Total: %d \n", total);
    return 0;
}     