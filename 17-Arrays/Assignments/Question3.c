#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int sum;

    for(int i = 0; i < 5; i++){
        sum = arr[i] + arr[i + 1];
    }

    printf("sum: %d", sum);

    return 0;
}