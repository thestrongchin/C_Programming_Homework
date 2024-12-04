#include <stdio.h>
int main(){
    int age;
    printf("Please enter your age");
    scanf("%d", &age);
    int age1 = age * 365.24;
    printf("You have lived for %d days", age1);
    return 0;
}