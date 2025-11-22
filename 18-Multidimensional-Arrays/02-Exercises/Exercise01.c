#include <stdio.h>
int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("array: %d \n", arr[i][j]);
        }
    }

    printf("specific array: %d \n", arr[0][1]);

    return 0;
}