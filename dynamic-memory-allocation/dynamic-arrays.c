#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    int *pArr;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    pArr = (int *)malloc(size * sizeof(int));
    if(pArr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0; i<size; i++){
        pArr[i] = (i + 1) * 10;
        printf("Element [%d]: %d\n", i, pArr[i]);
    }

    free(pArr);
    return 0;
}