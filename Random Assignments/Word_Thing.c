#include <stdio.h>
#include <ctype.h> 

int main() {
    char word [100];
    int vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]); 
        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("%s has %d vowel(s) and %d consonants", word, vowels, consonants);

    return 0;
}
