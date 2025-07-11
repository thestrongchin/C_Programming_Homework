#include <stdio.h>
int main(){
    int num = 0;
    int total = 0; 
    for(num = 1; num <= 9; num = num + 2){

        total = total + num;
        printf("%d   ", total);

    }
    return 0; 
}