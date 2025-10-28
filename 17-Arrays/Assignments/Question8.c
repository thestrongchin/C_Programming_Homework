#include <stdio.h>

int main(){
    int arr[8] = {12, 45, 67, 23, 89, 34, 56, 78};
    float avg;
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }

    avg = sum / 8;

    printf("The average is: %.2f", avg);

    return 0;
}