#include <stdio.h>
int main(){
    int hours;
    float wage;
    float salary;
    int overtime = 0;

    printf("Enter hours worked: ");
    scanf("%d", &hours);

    printf("Enter wage: ");
    scanf(" %f", &wage);

    if(hours > 40){
        overtime = 1;

    }else{
        overtime = 0;
    }

    switch(overtime){
        case 0:
            salary = hours * wage;
            printf("Your weekly wage without overtime is %.2f", salary);
            break;
        
        case 1:
            salary = hours * wage * 1.5;
            printf("Your weekly wage with overtime is %.2f", salary);
            break;

        default:
        printf("Error");
        break;
    }
    return 0;
}