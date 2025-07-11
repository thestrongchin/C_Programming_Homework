#include <stdio.h>

void show_reaction(int a){
    switch(a){
        case 1:
            printf("You seem happy :)");
            break;

        case 2: 
            printf("You seem sad :(");
            break;

        case 3: 
            printf("You seem suprised :0");
            break;

        default:
            printf("Emotion not recognized.");
            break;
    }
}

int main(){
    show_reaction(4);
    return 0;
}