#include <stdio.h>
int main(){
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Size of entire array: %lu \n", sizeof(arr));

    printf("Size of 1 row: %lu \n", sizeof(arr[0]));

    printf("Size of 1 element: %lu \n", sizeof(arr[0][0]));

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("rows: %d \n", rows);
    printf("columns: %d \n", cols);

    int elements = rows * cols;

    printf("Elements: %d \n", elements);

    return 0;
}