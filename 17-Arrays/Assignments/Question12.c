#include <stdio.h>

int indexOfSmallest(int datas, int arrayLength[], int startindex){
    int temp = arrayLength[0];
    int min = 0;

    // Finding smallest of arrayLength[]
    for(int i = 0; i < 7; i++){
        if(temp < arrayLength[i]){
            min = arrayLength[i];
        }
    }

    int 

}

int main(){
    int smallest;
    int data[] = {4, -1, 3, 8, 7, 2, 9};
    int arrLength = sizeof(data) / sizeof(data[0]);

    int result = indexOfSmallest(data, arrLength, 2);
}