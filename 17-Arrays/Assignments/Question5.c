#include <stdio.h>

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int temp;
    int moveNum = 5;

    for(int i = 0; i < 5; i++){

        temp = arr[i + moveNum];
        arr[i] = temp;
        moveNum--;

        printf("%d", arr[i]);
    }

    return 0;
}