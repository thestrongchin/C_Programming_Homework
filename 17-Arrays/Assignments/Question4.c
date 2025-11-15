#include <stdio.h>
int main(){
    int arr[6];

    for(int i = 0; i < 6; i++){

        printf("Please enter element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < 6; i++){
        if(arr[i] < min){
            min = arr[i];
        }

        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Min: %d \nMax = %d \n", min, max);

    return 0;

}