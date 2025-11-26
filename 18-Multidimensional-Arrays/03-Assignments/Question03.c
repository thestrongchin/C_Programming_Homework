#include <stdio.h>
int main(){
    int arr[3][3] = {
        {6, 1, 3},
        {4, 10, 6},
        {1, 8, 9}
    };

    int temp = arr[0][0];
    int max = 0;

    for(int i = 2; i < 3; i++){
        for(int j = 0; j < 3; j++){

            if(temp < arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("Max: %d \n", max);
    }
}