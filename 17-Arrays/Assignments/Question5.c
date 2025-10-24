#include <stdio.h>

int reverseArray(int arr[], int size){
    int temporary;

    for(int i = 0; i < size / 2; i++){
        temporary = arr[i];

        arr[i] = arr[size - 1 - i]; // replaces current element with the opposite
        arr[size - 1 -i] = temporary;
        
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++){
        printf("Array: %d \n", arr[i]);
    }

    return 0;
}
