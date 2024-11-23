#include <stdio.h>
int main(){
    long long age;
    long long result = 1;
    printf("Please enter your age and I will tell you if you are an adult, child, teen, or about to die 😀😀😀:");
    result = scanf("%lld", &age);

    if (result == 0){
        printf("Sorry, you entered a character, enter a number 😭 \n");
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }

    else if (age<0){
        printf("Are you not born? Enter a POSITIVE NUMBER as your age 😡 \n");
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }
    else if (age > 150){
        printf("How are you over 150 years old? I think you're about to die 💀💀💀 \n");
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }
 
    else if (age < 18){
        printf("You're a child 👶🏽");
        return 0;
    }
    
    else if (age >= 18 && age <= 25){
        printf("You're a teen 👦🏽");
        return 0;
    }
    else if (age > 25 && age < 65)
        printf("You're an adult 👨🏽 ");
        return 0;
    
    if (age > 65){
        printf("You're a senior 👴🏽");
        return 0;
    }
}