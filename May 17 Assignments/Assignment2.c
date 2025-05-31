#include <stdio.h>
int max_of_three (int a, int b, int c){
    int max = a;

    if(b > max){
        max = b;
    }

    if (c > max){
        max = c;
    }

    return max;
}

int main(){
    int a = 13, b = 50, c = 60;
    int result = max_of_three(a, b, c);
    printf("The biggest number is: %d \n", result);
    
    return 0;
}