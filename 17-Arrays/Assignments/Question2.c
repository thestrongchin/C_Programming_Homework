#include <stdio.h>

int main(){
    int courses[5] = {85, 90, 78, 92, 88};
    
    for(int i = 0; i < 5; i++){
        printf("Grade: %d \n", courses[i]);
    }

    return 0;
}
