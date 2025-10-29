#include <stdio.h>
int main(){
    long numbers[] = {1000, 2000, 3000, 4000, 1000};

    int found = numbers[0];

    for(int i = 0; i < 5; i++;){

        if(numbers[i] == found){
            found = numbers[i];
        }
        found++;
    }

    printf("The repeating number is: %d", numbers[i]);

    return 0;
}