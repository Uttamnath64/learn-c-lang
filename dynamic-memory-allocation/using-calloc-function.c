#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pArr = (int *)calloc(5, sizeof(int));
    if(pArr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i=0; i<5; i++){
        printf("Value of [%d]: %d\n", i, pArr[i]);
    }

    free(pArr);
    return 0;
}