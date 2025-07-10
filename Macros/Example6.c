#include <stdio.h>

#define DEBUG_MODE 

int main(){
    #ifdef DEBUG_MODE
        printf("Debug mode is ON \n");

    #else
        printf("Debig mode is OFF \n");

    #endif

    return 0;
}