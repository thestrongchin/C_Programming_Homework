#include <stdio.h>
int fibonacci(n){
    if(n <= 0){
        return 0;
    }

    if(n == 1){
        return 1;

    }else{
        int fibonacci(n) fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n = 20;

    for(int i = 1; i < n; i++){
        printf("%d, \n", n);
    }

    printf("\n");

    return 0;
}