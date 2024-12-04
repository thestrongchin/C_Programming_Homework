#include <stdio.h>
int main(){
    int days, weeks, total;
    printf("Please enter the number of days you want converted to weeks ");
    scanf("%d", &total);

    weeks = total / 7;
    days = total % 7;

    printf("%d days is equal to %d weeks and %d days ", total, weeks, days);
    return 0;



}