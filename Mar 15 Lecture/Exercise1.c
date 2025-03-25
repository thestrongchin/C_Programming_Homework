#include <stdio.h>
int main(){
    char operator;
    float num;
    float num2;
    float total;

    printf("Enter the first number: ");
    scanf("%f", &num);

    printf("Enter the operator (+ for addition, - for subtraction, * for multiplication, / for division): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf(" %f", &num2);

    switch(operator){
        case '+':
            total = num + num2;
            printf("The sum of %.2f and %.2f is %.2f", num, num2, total);
            break;

        case '-':
            total = num - num2;
            printf("The difference between %.2f and %.2f is %.2f", num, num2, total);
            break;

        case '*':
            total = num * num2;
            printf("The difference between %2.f and %.2f is %.2f", num, num2, total);
            break;

        case '/':
            total = num / num2;

            if(num / 0){
                printf("You cannot divide a number by 0, please try again");
            }else{
                printf("The difference between %.2f and %.2f is %.2f", num, num2, total);
            }
            break;

        default:
            printf("%c is an invalid operation, please try again", operator);
    } 
    return 0;
}