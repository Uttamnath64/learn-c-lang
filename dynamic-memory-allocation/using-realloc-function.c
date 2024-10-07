#include<stdio.h>
#include<stdlib.h>

int main(){
    int *pArr = (int *)malloc(5 * sizeof(int));
    if(pArr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i=0; i<5; i++){
        pArr[i] = (i+1) * 10;
        printf("Value of %d: %d\n", i, pArr[i]);
    }

    printf("\n\n5 more memory allocation\n");
    pArr = (int *)realloc(pArr, 10 * sizeof(int));

    for(int i=4; i<10; i++){
        pArr[i] = (i+1) * 10;
        printf("Value of %d: %d\n", i, pArr[i]);
    }

    free(pArr);
    return 0;
}