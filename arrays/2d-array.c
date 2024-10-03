#include<stdio.h>

void printArray(int arr[][5], int row, int col);

int main(){

    int matrix[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    printArray(matrix, 3, 5);
    
    return 0;
}

void printArray(int matrix[][5], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}