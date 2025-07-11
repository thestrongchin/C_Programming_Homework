#include <stdio.h>

int globalVar = 20;

void myFunction(){
    printf("Value of golbal variable in main: %d \n", globalVar);
}

int main (){
    printf("Value of global variable in main: %d \n", globalVar);
    myFunction();
    return 0;
}