#include <stdio.h>

int main(){
    int arr1[4] = {2, 4, 6, 8};
    int arr2[4] = {1, 0, 3, 6};
    int arr3[4];
    int size;

    for(int i = 0; i < 4; i++){
        arr3[i] = arr1[i] + arr2[i];
    }

    printf("Total: %d, %d, %d, %d", arr3[0], arr3[1], arr3[2], arr3[3]);

    return 0;

    

    


}