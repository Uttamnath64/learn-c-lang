#include<stdio.h>

int main(){

    FILE *file = fopen("data.txt", "w");
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    fprintf(file, "1.Hello, World!\n");
    fputs("2.Hello, World!\n", file);
    fputc('A', file);
    fclose(file);
    
    printf("File written successfully!!\n");

    return 0;
}