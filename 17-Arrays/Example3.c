#include <stdio.h>

void modifyArray(int arr[], int size);
void modifyAge(int age);

int main(){
    int numbers [5] = {1, 2, 3, 4, 5};

    int age = 13;

    modifyArray(numbers, 5);

    modifyAge(age);

    for (int i = 0; i < 5; i++){
        printf("arr[%d] = %d \n", i, numbers[i]);
    }

    printf("age: %d", age);

    return 0;
}

void modifyArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}

void modifyAge(int age){
    age  = age + 10;
    printf("age inside function: %d\n", age);
}