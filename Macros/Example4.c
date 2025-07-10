#include <stdio.h>

#define MODE 3

int main(){
    #if MODE == 1
        printf("Running in MODE 1 \n");

    #elif MODE == 2
        printf("Running in MODE 2 \n");

    #else 
        printf("Running in UNKNOWN MODE \n");

    #endif

    return 0;
}