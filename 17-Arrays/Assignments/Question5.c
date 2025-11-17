#include <stdio.h>
int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int swap = size / 2;
    int temp = 0;
    int reversed = 0;

    for(int i = 0; i < swap; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for(int i = 0; i < size; i++){
        printf("%d \n", arr[i]);
    }

    return 0;
}