#include <stdio.h>

void printTri(int size, char character){

    for (int i = 1; i <= size; i++) {

        for (int j = 1; j <= i; j++){

            printf("%c ", character);
        }
        printf("\n");
    }
}

int main(void){
    int triangleSize = 10;
    char fillCharacter = '*';

    printTri(triangleSize, fillCharacter);

    return 0;

}