#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;

    for(a = 1; a <= 6; a++){

        for(b = 1; b <= 6; b++){
            printf("* ");
        }
        printf("\n"); 
    }
    return 0;
}