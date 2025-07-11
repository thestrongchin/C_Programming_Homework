#include <stdio.h>
int main(){
    int num;
    int total = 6;

    for(num = 1; num <= 1000; num++){

        printf("%d    ", num);
        num = num + total;
    }
    return 0;
}