#include <stdio.h>
int main(){
    int month;
    int years;
    int days;
    int leapyear = 0;

    printf("Enter month (1-12): ");
    scanf(" %d", &month);

    printf("Enter year: ");
    scanf(" %d", &years);

    if(years % 4 == 0 && years % 100 != 0){
        leapyear = 1;
    }

    switch(month){
        case 1: 
            printf("January has 31 days");
            break;
        
        case 2:
            if(leapyear == 0){

                printf("February has 28 days");
            }else{
                printf("February has 29 days");
            }

            break;

        case 3: 
            printf("March has 31 days");
            break;

        case 4: 
            printf("April has 30 days");
            break;

        case 5: 
            printf("May has 31 days");
            break;

        case 6:
            printf("June has 30 days");
            break;

        case 7: 
            printf("July has 31 days");
            break;

        case 8:
            printf("August has 31 days");
            break;

        case 9: 
            printf("September has 30 days");
            break;

        case 10:
            printf("October has 31 days");
            break;
        
        case 11: 
            printf("November has 30 days");
            break;

        case 12: 
            printf("December has 31 days");
            break;

        default:
            printf("Sorry, %d is not a valid input. Progam has been stopped.", month);
            break;
    }
    return 0;
}