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
    int total = sumofArray(arr, 5);

    sumofArray(arr, 5);
    
    printf("total: %d", total);

    return 0;
}