#include <stdio.h>
int findMin(int arr1[], int sizeArray1){
    int temp = arr1[0];
    int min = temp;

    for(int i = 0; i < sizeArray1; i++){
        if(arr1[i] < temp){
            min = arr1[i];
        }
    }

    return min;
}

int compare(int array1[], int array2[], int size1, int size2){
    int num1 = findMin(array1, size1);
    int num2 = findMin(array2, size2);
    int min;

    if(num1 < num2){
        min = num1;
    }

    if(num2 < num1){
        min = num2;
    }

    return min;
}

int main(){
    int array1[3] = {23, 82, 37};
    int array2[3] = {68, 67, 15};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int result = compare(array1, array2, size1, size2);

    printf("the min is: %d", result);

    return 0;
}