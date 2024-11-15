#include <stdio.h>
int main(){
    long long a;
    printf("Enter a POSITIVE integer");
    scanf("%lld", &a);
    if (a%2 == 0){
        printf("%lld is even", a);
    }
    if (a%2 == 1){
        printf("%lld is odd \n \n \n", a);
    }
    printf("END OF CODE, PLEASE RUN AGAIN");
    return 0;
    }
    

  