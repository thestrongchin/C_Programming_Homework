#include <stdio.h>

int recieveArray(int arr[4], int arr2[4], int arr3[4]){
    for(int i = 0; i < 4; i++){
        arr3[i] = arr2[i] + arr[i];

    }
}

int main(){
    int num1[4] = {2, 4, 6, 8};
    int num2[4] = {1, 0, 3, 6};
    int num3[4];

    recieveArray(num1, num2, num3);

    for(int i = 0; i < 4; i++){
        printf("added: %d \n", num3[i]);
    }

    return 0;
}