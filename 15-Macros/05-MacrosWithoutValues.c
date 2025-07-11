// How to use macros without values

#include <stdio.h>

#define DEBUG

int main(){
    int x = 10;
    int y = 20;

    #ifdef DEBUG
        printf("Debug Info: x = %d, y = %d \n", x, y);

    #endif
    
    printf("Program running... \n");
    return 0;
}