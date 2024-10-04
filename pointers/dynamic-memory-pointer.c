#include<stdio.h>
#include <stdlib.h>

int main(){

    int *ptr = (int *)malloc(5 * sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // array element assign value
    for (int i=0; i<5; i++){
        ptr[i] = (i + 1) * 10;
    }
    
    // print array elements
    for (int i=0; i<5; i++){
        printf("Element %d: %d\n", i, ptr[i]);
    }

    // free memory
    free(ptr);
    
    return 0;
}