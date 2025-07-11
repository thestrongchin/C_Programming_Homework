// #include <stdio.h>
// int main() {
//     int age = 60;
//     if(age < 18)
//         printf("child\n");

//     else if(18<= age <26)
//     printf("teen \n");
//     return 0;
// }
//I predict that the code will be an error or warning because in line 7, there is no logical operator. 
//Also, in line 7, there needs to be a semicolon at the end, so it will be an error
//Line 7 needs a && between = and age

//Correction:
#include <stdio.h>
int main() {
    int age = 60;
    if(age < 18){
        printf("child\n");
    }else if(age >=18 && age <= 26)
        printf("teen \n");
    return 0;
}