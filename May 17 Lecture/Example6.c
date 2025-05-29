#include <stdio.h>

int find_max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    find_max(3, 5);
    printf("The larger number is: %d", find_max(10,15));
    return 0;
}