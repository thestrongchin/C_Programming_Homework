//Rules:
// - Only 1 for loop
// - Print 1 3 5 7 9 

#include <stdio.h>
int main(){
    int num = 0; 

    for(num = 0; num < 10; num + 2){

        if(num%2 == 1){
            printf("number is %d \n", num);
        }
    }
    return 0; 
}