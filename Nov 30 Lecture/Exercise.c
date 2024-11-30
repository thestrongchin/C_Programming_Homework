#include <stdio.h>
int main(){
    int num, absValue = 0;
    printf("Please enter a negative or positive integer");
    scanf("%d", &num);
    absValue = (num > 0)? num : -num;
    return 0;
}