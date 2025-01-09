#include <stdio.h>
int main(){
    int num = 0;
    int count = 0;
    do{
        printf("Final number = %d \n", num);
        count++;
        num = num + count;
    }
    while(count<10);
}
