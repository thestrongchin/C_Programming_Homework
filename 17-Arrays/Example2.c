#include <stdio.h>

void printArray(int arr[], int size); // function declaration

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    printArray(numbers, 5);
    return 0;
}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){

        printf("arr [%d] = %d \n", i, arr[i]);
    }
}

// note: explain 