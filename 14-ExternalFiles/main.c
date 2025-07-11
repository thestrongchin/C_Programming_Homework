#include <stdio.h>

#include "my_module.h"

int main(){
    greet();

    printf("Global Counter: %d \n", global_counter);

    return 0;
}