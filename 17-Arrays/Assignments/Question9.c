#include <stdio.h>
int main(){
    long numbers[] = {1000, 2000, 3000, 4000, 1000};
    int matching = numbers[0];
    int temp = numbers[0];

    for(int i = 0; i < 5; i++){
        if(temp == numbers[i]){
            int temp = matching;

        }
    }

    printf("The repeating number is: %d", matching);

    return 0;
}