#include <stdio.h>
int main(){
    int arr[8] = {12, 45, 67, 23, 89, 34, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int average;

    for(int i = 0; i < size; i++){
        int sum = sum + arr[i];
        average = sum / size;
    }

    printf("average: %d", average);

    return 0;
    
}