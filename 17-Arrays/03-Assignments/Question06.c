#include <stdio.h>
int add(int arr1[], int arr2[], int arr3[]){
    for(int i = 0; i < 4; i++){
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main(){
    int array1[4] = {2, 4, 6, 8};
    int array2[4] = {1, 0, 3, 6};
    int array3[4];

    add(array1, array2, array3);

    for(int i = 0; i < 4; i++){
        printf("Array: %d \n", array3[i]);
    }

    return 0;
    
}