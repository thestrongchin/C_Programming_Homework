#include <stdio.h>
int main(){
    for (int i = 0; i <= 50; i++){
        if(i % 7 == 0){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}