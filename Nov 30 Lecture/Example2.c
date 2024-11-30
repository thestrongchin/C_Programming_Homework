#include <stdio.h>
int main(){
    int count = 1;
    int sum = 10;

    while(count < 10){
        sum = sum+count;
        count++;
    }
    
    printf("Count: %d \n", sum);
    return 0;
}