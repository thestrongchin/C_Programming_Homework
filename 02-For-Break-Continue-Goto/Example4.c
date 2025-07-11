#include <stdio.h>
int main(){
    int i = 1;
    while (i <= 5){
        i++;
        continue;
        printf("%d \n", i);

    }
    printf("Loop ended \n");
    return 0;
    
}