#include <stdio.h>
int main(){
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arr2[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int temp = arr1[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int temp = arr1[i][j];
            arr2[i][j] = temp;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("arr2: %d \n", arr2[i][j]);
        }
    }

    return 0;
}