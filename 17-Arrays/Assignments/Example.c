#include <stdio.h>
void sum(int a, int b){
    int total = a + b;
    printf("total is: %d", total);
}

int main(){

    sum(1, 2);

    return 0;
}