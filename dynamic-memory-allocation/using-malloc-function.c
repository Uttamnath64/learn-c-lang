#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pNum = (int *)malloc(sizeof(int));
    if(pNum == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    *pNum = 10;
    printf("Value: %d", *pNum);

    free(pNum);
    return 0;
}