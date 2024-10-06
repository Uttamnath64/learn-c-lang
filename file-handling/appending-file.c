#include<stdio.h>

int main(){

    FILE *file = fopen("data.txt", "a");
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    fputs("\nNew line added!\n", file);
    fclose(file);

    printf("File text appended successfully!!\n");

    return 0;
}