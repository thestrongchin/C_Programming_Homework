#include <stdio.h>

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("Please enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    return 0;
}