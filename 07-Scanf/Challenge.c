#include <stdio.h>
int main(){
    long long a;
    printf("Enter a POSITIVE integer");
    scanf("%lld", &a);
    if (a%2 == 0){
        printf("%lld is even", a);
    }
    return 0;
}   