#include <stdio.h>

int findMax(int arr[], int length){
    int temp = arr[0];

    for(int i = 0; i < 5; i++){
        if(temp < arr[i]){
            temp = arr[i];
        }
    }

    return temp;
}

int main(){

    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter array: ");
        scanf("%d", &arr[i]);

    }

    int length = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, length);

    printf("The max is %d", max);

    return 0;

}