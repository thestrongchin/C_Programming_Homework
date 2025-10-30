#include <stdio.h>
#include <stdbool.h>

int main(){
    bool boolArray[] = {1, 0, 1, 1, 0, 0};
    int trues = 0;

    for(int i = 0; i < 6; i++){

        if(boolArray[i] > 0){
            trues++;
        }
    }

    printf("There are %d true values", trues);
}