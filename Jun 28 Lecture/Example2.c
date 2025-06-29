#include <stdio.h>

void myFunction(){
    int value = 10;
    printf("myFunction value = %d \n", value);

}

int main(){
    int value = 20;
    printf("Main value = %d \n", value);
    myFunction();
    return 0;
}