#include <stdio.h>
int main(){
    int i = 0;

    while (i < 10){
        if (i == 5){
            goto end;
        }
        printf("i = %d \n", i);
        i++;
    }
end: 
    printf("Exited the loop, program ends");

    return 0;
}