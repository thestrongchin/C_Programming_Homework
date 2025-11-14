#include <stdio.h>
int main(){
    int arr[6];
    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < 6; i++){

        printf("Please enter element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 6; i++){
        if(min < arr[i]){
            min = arr[i];
        }

        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("Min: %d \n Max = %d \n", min, max);

    return 0;

}