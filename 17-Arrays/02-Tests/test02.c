#include <stdio.h>
int main(){
    int arr[4] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr2[3] = {0, 0, 0};

    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for(int i = 0; i < size2; i++){
        arr2[i] = arr[i] + arr[i + 1];
    }

    int min = arr2[0];

    for(int i = 0; i < size2; i++){
        if(arr2[i] < min){
            min = arr2[i];
        }
    }

    printf("min: %d", min);

    return 0;
}