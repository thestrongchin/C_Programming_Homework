#include <stdio.h>

int counter = 0;

void increment(){
    counter++;
    printf("Counter incremented in increment(): %d \n", counter);
}

void display(){
    printf("Counter variable in display(): %d \n", counter);
}

int main(){
    display();
    increment();
    display();
    increment();
    return 0;
}