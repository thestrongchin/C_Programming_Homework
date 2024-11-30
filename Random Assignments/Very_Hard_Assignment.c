#include <stdio.h>
int main(){
    long long a;
    int result = 100;
    printf("Enter a POSITIVE integer");
    result = scanf("%lld", &a);

    if (result == 0){
        printf("Sorry, you entered a character, please enter a POSITIVE INTEGER \n");
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }

    if (a<0){
        printf("Sorry, %lld is a negative integer, please enter a POSITIVE integer \n", a);
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }

    if (a%2 == 1){
        printf("%lld is odd \n", a);
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }

    if (a%2 == 0){
        printf("%lld is even \n", a);
        printf("END OF CODE, PLEASE RUN AGAIN \n");
        return 0;
    }
    return 0;
}
