#include<stdio.h>

int main(){

    FILE *file = fopen("data.txt", "r");
    char buffer[100];
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    while(fgets(buffer, 100, file) != NULL){
        printf("%s", buffer);
    }
    fclose(file);
    
    printf("\n-----------\nFile read successfully!!\n");
    return 0;
}