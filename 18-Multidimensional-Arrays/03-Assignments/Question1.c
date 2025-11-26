#include <stdio.h>
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    arr[1][2] = 100;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("arr: %d \n", arr[i][j]);
        }
    }

    return 0;
}
