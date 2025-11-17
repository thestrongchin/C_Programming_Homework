#include <stdio.h>
int compare(int arrA[], int lenA, int arrB[], int lenB){
    int temp = arrA[0];
    int matchingCount = 0;

    // Nested for loop
    for(int i = 0; i < lenA; i++){
        temp = arrA[i];

        for(int j = 0; j < lenB; j++){
            if(temp == arrB[j]){
                matchingCount++;
                
            }
        }
    }

    return matchingCount;
}

int main(){
    int arrayA[5] = {3, 6, 1, 2, -4};
    int arrayB[6] = {7, 9, -1, 2, 6, 8};

    int arrayA_len = sizeof(arrayA) / sizeof(arrayA[0]);
    int arrayB_len = sizeof(arrayB) / sizeof(arrayB[0]);

    int result = compare(arrayA, arrayA_len, arrayB, arrayB_len);

    printf("%d numbers are matching", result);

    return 0;
}