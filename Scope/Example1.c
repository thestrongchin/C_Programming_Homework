#include <stdio.h>

void myFunction(){
    int localVar = 10;
    printf("Value of local variable: %d \n", localVar);
}

int main(){
    myFunction();
    // printf("%d", localVar);
    return 0;
}