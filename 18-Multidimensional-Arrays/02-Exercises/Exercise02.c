#include <stdio.h>
void printMatrix(int arr[3][2]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){ 
            printf("array: %d \n", arr[i][j]);
        }
    }
}

int main(){
    int array[3][2] = {
        {1, 2},
        {4, 5},
        {6, 7}
    };

    printMatrix(array);

    for(int i = 0; i < 3; i++){
        int sum = 0;

        for(int j = 0; j < 2; j++){
            sum = sum + array[i][j]; 

        }
        printf("sum = %d \n", sum);

    }

    return 0;
}