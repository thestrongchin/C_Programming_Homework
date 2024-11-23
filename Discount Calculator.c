#include <stdio.h>
int main(){
    //variables 
    int spendings;
    char isMember;
    printf("How much have you spent on your order? "); 
    scanf("%d", &spendings);
    printf("Are you a member? \n");
    printf("y = yes, n = no: ");
    scanf(" %c", &isMember);
 
    // if user is member
    if(isMember == 'y' || isMember == 'Y'){
        if (spendings >= 500){
            printf("Your savings = 20%%");
            return 0;
        }

        if (spendings >= 200 && spendings < 500){
            printf("Your savings = 10%%");
            return 0;
        }

        if (spendings <200){
            printf("Your savings = 5%%");
            return 0;
        }
    }

    //if user is not member
    else if (isMember == 'n' || isMember == 'N'){
            if (spendings >= 500){
            printf("Your savings = 10%%");
            return 0;
        }

        if (spendings >= 200 && spendings < 500){
            printf("Sorry, you do not get a discount");
            return 0;
        }

        if (spendings <200){
            printf("Sorry, you do not get a discount");
            return 0;
        }
    } 

    else {
        printf("Please enter a valid character");
    }
}
