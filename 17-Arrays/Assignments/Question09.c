#include <stdio.h>
#include <stdbool.h>
int main(){
    long numbers[5] = {1000, 2000, 3000, 4000, 1000};
    int temp = numbers[0];
    int dupes = false;

    for(int i = 0; i < 5; i++){
        if(temp == numbers[i]){
            dupes = true;
        }
    }
    
    if(dupes == true){
        printf("There are duplicate numbers");

    }else{
        printf("There are no duplicate numbers");

    }

    return 0;
}