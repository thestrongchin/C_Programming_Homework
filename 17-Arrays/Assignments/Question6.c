#include <stdio.h>

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    printf("Non reversed array: %d, %d, %d, %d, %d, %d \n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
    printf("Reversed array: %d, %d, %d, %d, %d, %d", arr[5], arr[4], arr[3], arr[2], arr[1], arr[0]);

    return 0;

}