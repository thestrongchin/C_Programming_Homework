#include <stdio.h>
#include <stdbool.h>

int main(){
    bool boolArray[] = {1, 0, 1, 1, 0, 0};
    int trueNum = 0;

    for(int i = 0; i < 6; i++){
        if(boolArray[i] == true){
            trueNum++;

        }
    }

    printf("There are %d true numbers", trueNum);

    return 0;
}