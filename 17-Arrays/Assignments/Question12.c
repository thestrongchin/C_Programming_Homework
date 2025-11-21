#include <stdio.h>

int indexOfSmallest(int datas[], int arrayLength, int startindex){
    int min = 0;
    int temp = datas[startindex];

    for(int i = startindex; i < arrayLength; i++){
        if(datas[i] < temp){
            min = datas[i];
        }
    }

    return min;
}

int main(){
    int smallest;
    int data[] = {4, -1, 3, 8, 7, 2, 9};
    int arrLength = sizeof(data) / sizeof(data[0]);

    int result = indexOfSmallest(data, arrLength, 2);

    printf("The smallest is: %d \n", result);

    return 0;
}