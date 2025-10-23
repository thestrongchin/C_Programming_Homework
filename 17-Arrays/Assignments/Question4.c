#include <stdio.h>

int main(){
    int arr[6];
    int elements;
    int max;
    int min;

    printf("Please enter an integer: ");
    for(int i = 0; i < 6; i++){ // asks user for input 6 times, each time putting their input into the array
        scanf("%d", &arr[i]);
        printf("Please enter an integer: ");
    }

    max = arr[0]; // sets max to the first number of the array
    min = arr[0]; // sets min to the first number of the array

    for(int i = 1; i < 6; i++){
        if(arr[i] > max){ // if current array number is more than max, update max to the current array number
            max = arr[i];
        }

        if(arr[i] < min){ // if current array number is less than min, update min to current number
            min = arr[i];
        }
    }

    printf("\nMaximum value is: %d \n", max);
    printf("Minimum value is: %d", min);
}