#include <stdio.h>
int main(){
    int arr[] = {0, 1, 2, 3, 4};

    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(arr));
    printf("The array length is %d \n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}