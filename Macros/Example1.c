#include <stdio.h>

#define LENGTH 10

int main(){
    int length_var = 10;

    int area_macro = LENGTH * 5;
    printf("Area using macro LENGTH: %d \n", area_macro);

    int area_var = length_var * 5;
    printf("Area using variable length_var %d \n", length_var);

    length_var = 20;
    area_var = length_var * 5;
    printf("Updated area using variable: %d \n", area_var);

    // LENGTH = 20;

    return 0;
}