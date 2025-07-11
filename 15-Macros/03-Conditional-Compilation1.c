// Conditional Compilation: Example 1

#include <stdio.h>

#define MODE 1 // Toggles which mode is used. Useful for debugging (used in capstone 2)

int main(){
    #if MODE == 1
        printf("Running mode MODE 1 \n");

    #elif MODE == 2
        printf("Running in MODE 2 \n");

    #else
        printf("Running in UNKNOWN MODE \n");

    #endif

    return 0;
}

