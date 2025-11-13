#include <stdio.h>

int sumofArray(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int length = sizeof(arr) / sizeof(arr[0]);
    
    int total = sumofArray(arr, length);
    
    printf("total: %d", total);

    return 0;
}