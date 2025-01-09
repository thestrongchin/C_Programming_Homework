#include <stdio.h>

int main() {
    // Variables
    int spendings;
    char isMember;
    int result;

    printf("How much have you spent on your order? ");
    printf("Are you a member? \n");
    printf("y = yes, n = no: ");

    // If the user is a member
    if (isMember == 'y' || isMember == 'Y') {
        if (spendings >= 500) {
            float total = spendings * 0.8; 
            printf("Congrats! You got a 20%% discount! \n");
            printf("Your total after the 20%% discount is %.2f \n", total);
            return 0;

        } if (spendings >= 200 && spendings <= 500) {
            float total = spendings * 0.9;
            printf("Congrats! You got a 10%% discount! \n");
            printf("Your total after the 10%% discount is %.2f\n", total);
            return 0;

        } if (spendings < 200){
            float total = spendings * 0.95;
            printf("Congrats! You got a 5%% discount! \n");
            printf("Your total after the 5%% discount is %.2f\n", total);
            return 0;
        }
    }

    if (isMember == 'n' || isMember == 'N'){
        if (spendings >= 500){
            float total = spendings * 0.9;
            printf("Congrats! You got a 10%% discount! \n");
            printf("Your total after the 10%% discount is %.2f", total);
            return 0;
        }

        if (spendings < 500){
            float total = spendings;
            printf("Sorry, you did not get a discount \n");
            printf("Your total is: %.2f,", total);
            return 0;
        }
    }
    if (spendings<0){
        printf("Please enter a positive total \n");
        return 0;
    }
    if (result == 0){
        printf("Please enter a positive number, not a character \n");
        return 0;
    }
}