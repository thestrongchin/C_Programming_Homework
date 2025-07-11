// Conditional Compilation 2

#include <stdio.h>

#define DEBUG 1

#if DEBUG
    #define LOG(msg) printf("DEBUG: %s \n", msg)

#else
    #define LOG(msg)

#endif

int main(){
    LOG("This is a LOG message");
    return 0;
}