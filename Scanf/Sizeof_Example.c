#include <stdio.h>
int main(){
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));

    int a = 5;
    printf("%zu\n", sizeof(a));
    printf("%zu \n",sizeof a);
}