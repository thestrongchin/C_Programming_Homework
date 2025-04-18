#include <stdio.h>
int main(){
    char spaces;
    char lines;
    char characters;

    characters = getchar();
    printf("%c", characters);

    characters = getchar();
    printf(" %c", characters);

    characters = getchar();
    printf(" %d", characters);

    return 0;

} 