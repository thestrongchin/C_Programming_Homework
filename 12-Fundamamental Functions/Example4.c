#include <stdio.h>

void recieve_signal(int a, int b){
    printf("Recieved signals are: %d and %d", a, b);
}

int main(){
    recieve_signal(10, 20);
    return 0;
}