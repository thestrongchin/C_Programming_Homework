#include <stdio.h>
int main(){
    int a[2][3];

    printf("Enter 6 integers for a 2x3 array: ");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("You entered: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}