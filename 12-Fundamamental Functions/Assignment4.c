#include <stdio.h>
int fibonacci(int n){
    if(n <= 0){
        return 0;
    }

    if(n == 1){
        return 1;
        
    }else{
        return fibonacci (n - 1)+ fibonacci(n - 2);
    }
}

int main(){
    int n = 20;

    for (int i = 0; i < n; i++){
        printf("%d, ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
