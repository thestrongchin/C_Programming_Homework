#include <stdio.h>
int main(){
    int i = 0;
    int j = 0;

    for(i = 1; i <= 3; i++){
        printf("outer loop i = %d \n", i);

        for(j = 1; j <= 4; j++){
            printf("\tinner loop j = %d \n", j);

        }
    }
    return 0; 
}