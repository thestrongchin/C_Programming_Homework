#include <stdio.h>
int main() {
    int choice;
    float balance = 1000.0;
    float deposit;
    float withdrawn;

    printf("========================================\n");
    printf("        Welcome to Bus Bus Bank!\n");
    printf("========================================\n");

    printf("\nYour current balance is: %.2f\n", balance);
    printf("What do you want to do?\n");
    printf("Please enter either 1, 2, 3, or 4 as your selection:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Please enter your selection here: ");
    scanf("%d", &choice);
    
    // Error Detection
    if (choice < 1 || choice > 4) {
         printf("Invalid selection. Please try again.\n");
    }

    while(choice <=4 || choice >= 1)

        if(choice == 1){
            printf(" ================================= \n \n");
            printf("  Your current balance is %.2f \n \n ", balance);
            printf("================================= \n \n");
        }

        while(choice <=4 || choice >= 1)
        if(choice == 2){
            printf("Please enter how much you want to deposit: ");
            scanf("%f", &withdrawn);
            float depositAmount = deposit + balance;
            printf("Your new account balance is $%.2f. \n \n", balance);
        }
        
        while(choice <=4 || choice >= 1) 
        if(choice == 3){
            printf("Please enter how much you want to withdraw: ");
            scanf("%f", &withdrawn);
            float withdrawnAmount = balance - withdrawn;
            printf("You new account balance is $%.2f. \n \n", withdrawnAmount);
        }
}


    
