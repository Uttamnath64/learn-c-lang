#include<stdio.h>

int main(){
    FILE *file = fopen("data.txt", "r");
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    printf("File size %ld bytes\n", ftell(file));
    
    fclose(file);
    return 0;
}