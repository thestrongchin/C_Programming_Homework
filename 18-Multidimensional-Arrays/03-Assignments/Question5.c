#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float random_num_generate(){
    float randomNum = 0;
    
    randomNum = (float)rand() / (RAND_MAX - 1);

    return randomNum;

}

void copy_num(int row, int col, float source[row][col], float target[row][col]){
    int temp = source[0][0];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            temp = source[i][j];
            target[i][j] = temp;
        }
    }
}

void print_arrays(int row2, int col2, float source2[row2][col2], float target2[row2][col2]){

    printf("source array: \n");
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            printf("%.2f \t", source2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("target array: \n");
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            printf("%.2f \t", target2[i][j]);
        }
        printf("\n");
    }
}

int main(){
    srand(time(NULL));

    int rows = 0;
    int cols = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\n");

    float sourceArr[rows][cols];
    float targetArr[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            float result = random_num_generate();
            sourceArr[i][j] = result;
        }
    }

    copy_num(rows, cols, sourceArr, targetArr);
    print_arrays(rows, cols, sourceArr, targetArr);

   return 0;
}