#include<stdio.h>
#include <wchar.h>

int main(){

    int data[] = {10, 20, 30, 40, 50};
    FILE *file = fopen("data.bin", "wb");
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    fwrite(data, sizeof(int), 5, file);
    fclose(file);

    file = fopen("data.bin", "rb");
    if(file == NULL){
        printf("Failed to open file!\n");
        return 1;
    }

    int readData[5];
    fread(readData, sizeof(int), 5, file);

    for(int i=0; i<5; i++)
        printf("Element %d: %d\n", i, readData[i]);
    
    fclose(file);
    return 0;
}