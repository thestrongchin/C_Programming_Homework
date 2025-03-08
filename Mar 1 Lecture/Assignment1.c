#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;

    for(a = 1; a <= 4; a++){
      
        for(b = 1; b <= 5; b++){

            if(a == 4 || a == 1 || b == 1 || b == 5){
                printf("* "); 
            }
            else{
                printf("  ");
            }

        } 
        printf("\n");
    }
    return 0; 
}