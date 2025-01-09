#include <stdio.h>
int main(){
    char ch;
    int num;

    printf("Enter a character ");
    ch = getchar();

    while (getchar() != '\n');
    printf("Enter a number ");
    scanf("%d,", &num);

    printf("You entered this character: %c \n", ch);
    printf("You entered this number: %d",num);
    return 0;
}