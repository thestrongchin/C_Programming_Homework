#include <stdio.h>
int main(){
    int arr[6];
    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < 6; i++){

        printf("Please enter element #%d: ", i + 1);
        scanf("%d", &arr[n]);
    }

    for(int n = 0; n < 6; n++){
        if(min < arr[i]){
            min = arr[n];
        }

        if(max > arr[n]){
            max = arr[n];
        }
    }

    printf("Min: %d \n Max = %d \n", min, max);

    return 0;

}