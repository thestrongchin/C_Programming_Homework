#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[6] = {1, 0, 0, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int trues = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == true){
            trues++;
        }
    }

    printf("There are %d trues", trues);

    return 0;
}